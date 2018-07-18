"""
Filename: epGreedyAnnealing.py
Authors: Ryan Cho and Telon Yan
Implements a modified epsilon-greedy algorithm for pycrysfml, but can be
used for similar scenarios. For crystallography, since one may not visit
individual HKL values more than once, what happens is:
We have a 1 - epsilon + k*epsilon/n chance of visiting a state/machine
whose expected reward is highest (e.g. 0.5, there may be ties) and an
epsilon/n chance of visiting one of the states/slot machines whose
expected reward is not the highest (where k is the number of states with
a tied max reward, such as 0.5, and n is the total number of possible HKL
values to go to next).
Code borrowed from:
https://imaddabbura.github.io/blog/data%20science/2018/03/31/epsilon-Greedy-Algorithm.html
https://github.com/scattering/crystal-rl
https://github.com/scattering/pycrysfml
"""

import os,sys;sys.path.append(os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))))
import random
import numpy as np
import os
import matplotlib as mpl
mpl.use('Agg')
import matplotlib.pyplot as plt
import scipy

#So apparently you just can't run pycrysfml on Windows because you'd have to build all of its dependencies first
import fswig_hklgen as H
import hkl_model as Mod
import sxtal_model as S

import  bumps.names  as bumps
import bumps.fitters as fitter
from bumps.formatnum import format_uncertainty_pm

#Crystal model stuff

np.seterr(divide="ignore",invalid="ignore")

#Set data files
DATAPATH = os.path.dirname(os.path.abspath(__file__))
backgFile = None
observedFile = os.path.join(DATAPATH,r"../prnio.int")
infoFile = os.path.join(DATAPATH,r"../prnio.cfl")

#Read data
spaceGroup, crystalCell, atomList = H.readInfo(infoFile)
# return wavelength, refList, sfs2, error, two-theta, and four-circle parameters
wavelength, refList, sfs2, error = S.readIntFile(observedFile, kind="int", cell=crystalCell)
tt = [H.twoTheta(H.calcS(crystalCell, ref.hkl), wavelength) for ref in refList]
backg = None
exclusions = []

#Make a dictionary of the indices of each HKL value for the given crystal
d = {}
for i in range(len(refList)):
    d[str(refList[i].hkl).replace("[","").replace("]","").replace(",","")] = i


#TODO This method is hard coded, but it would be better if it were not
def setInitParams():
    #Make a cell
    cell = Mod.makeCell(crystalCell, spaceGroup.xtalSystem)
    #Define a model
    m = S.Model([], [], backg, wavelength, spaceGroup, cell,
                [atomList], exclusions,
                scale=0.062978, error=[],  extinction=[0.000105])
    #Set a range on the x value of the first atom in the model

    #Praesydmium z coordinate
    m.atomListModel.atomModels[0].z.value = 0.3 #zApprox
    m.atomListModel.atomModels[0].z.range(0,0.5)
    #Oxygen d z coordinate
#    m.atomListModel.atomModels[5].z.value = 0.2
#    m.atomListModel.atomModels[5].z.range(0,0.5)
    return m

def fit(model):
    #Create a problem from the model with bumps, then fit and solve it
    problem = bumps.FitProblem(model)
    monitor = fitter.StepMonitor(problem, open("sxtalFitMonitor.txt","w"))
    fitted = fitter.LevenbergMarquardtFit(problem)
    x, dx = fitted.solve(monitors=[monitor])
    return x, dx, problem.chisq()


class EpsilonGreedy():

    def __init__(self, epsilon, counts, values):
        self.epsilon = epsilon
        self.counts = counts
        self.values = values
        self.visited = []
        return

    def reset(self):
        #self.counts = counts
        #self.values = values
        self.visited = []
        return

    def getCounts(self):
        return self.counts

    def getValues(self):
        return self.values

    #Returns the indices of the HKL values with the best immediate reward
    #Returns the indices of the HKL values with the best immediate reward
    def bestReward(self):
        #rewardMax = -99999
        maxIndices = []
        choices = list(self.values)
        choices_indices = []
        for i in range(len(self.values)):
            choices_indices.append(i)

        popTimes = 0
        for i in self.visited:
            #print(i-popTimes)
            choices_indices.remove(i)
            choices.pop(i-popTimes)
            popTimes += 1

        rewardMax = choices[np.argmax(choices)]
        #for i in range(len(choices)):
        #    if choices[i] > rewardMax:
        #        rewardMax = choices[i]
        for i in range(len(choices)):
            if choices[i] == rewardMax:
                maxIndices.append(choices_indices[i])
        return maxIndices
    #Chooses an HKL value to go to using bestReward, ignoring hkls already visited. Returns the index of the hkl chosen
    def select_action(self):
        coin = random.random()
        choice = 0
        
        #Exploit - Pick among the options (tied) with the best expected reward
        if coin > self.epsilon:
            choice = random.choice(self.bestReward())
            self.visited.append(choice)
            self.visited.sort()
            
        #Explore - Pick a choice at random
        else:
            choices = list(self.values)
            choices_indices = []
            for i in range(len(self.values)):
                choices_indices.append(i)
            for i in self.visited:
                choices_indices.remove(i)
                
            choice = random.choice(choices_indices)
            self.visited.append(choice)
            self.visited.sort()
            
        return int(choice)

    #Updates the counts of hkls visited and their expected reward with new data
    def update(self, chosen_action, reward):
        self.counts[chosen_action] += 1
        n = self.counts[chosen_action]
        value = self.values[chosen_action]
        self.values[chosen_action] = value * (n-1.0)/n + float(reward)/n
	
	t = np.sum(self.counts)
	self.epsilon = 1 / np.log(t + 0.0000001)
        return


#agent is the EpsilonGreedy() object, actions is a list of HKLs 
#(each element of the list is a length 3 list: [h, k, l]), num_sims is an int, horizon is an int
def test_algorithm(agent, actions, num_sets, num_sims, horizon, numParameters):

    for i in range(num_sets):
        print("Training set #" + str(i))
        os.system("mkdir set" + str(i))
        
        #These are for graphing trends in the agent over time
        final_zs = np.zeros(num_sims)
        speeds = np.zeros(num_sims)                   #This is just how many hkls are visited per epoch
        total_rewards = np.zeros(num_sims)
        z_progression = []


        for simulation in range(num_sims):
            print("simulation #" + str(simulation))

            #Initialization
            agent.reset()
            total_reward = 0                           #This is replaced by total_rewards
            reward = 0
            t = 0
            qSquared = []
            #Action list (actual ReflectionList Objects)
            chosen_actionList = []
            #Action index list
            actionIndexList = []
            observed_intensities = []
            rewards = np.zeros(horizon)
            model = setInitParams()
            prevChiSq = 0
            chiSqs = []
            zs = []

            #agent.initialize(agent.getCounts(), agent.getRewards()) #this line is kinda pointless
            file = open("set" + str(i) + "/epGreedyResults" + str(simulation) + ".txt", "w")
            file.write("HKL Value\t\tReward\t\tTotalReward\tChi Squared\tZ Appr. \tError\tTwo-Thetas\tSfs2")

    #	qSquared = np.zeros(len(d))

            for t in range(horizon):
                #print(agent.getValues())
                #print(agent.visited)

                #This is the index of the action/hkl to go to at this timestep
                chosen_action = agent.select_action()
                #print(chosen_action)
                actionIndexList.append(chosen_action)
                chosen_actionList.append(actions[chosen_action])

                #feed actions[chosen_action] into bumps to get "reward" to use in agent.update() which updates expected reward
                #Find the data for this hkl value and add it to the model

                #because refList Objects are hard to change, make a new reflist each time with the new data
                model.refList = H.ReflectionList(chosen_actionList)
                model._set_reflections()

                model.error.append(error[chosen_action])
                model.tt = np.append(model.tt, [tt[chosen_action]])

                observed_intensities.append(sfs2[chosen_action])
                model._set_observations(observed_intensities)
                model.update()

                chiSq = 0
                dx = 0
                x = 0

                if t > numParameters - 1:
                    x, dx, chiSq = fit(model)
                    if t > numParameters:
                        reward = -1 * abs(chiSq - prevChiSq)
                        if (prevChiSq != 0 and chiSq < prevChiSq):
                            reward += 1.5 * abs(chiSq - prevChiSq)
                        rewards[t] = reward
                        agent.update(chosen_action, reward)
                    prevChiSq = chiSq
                chiSqs.append(chiSq)

                h = chosen_actionList[t].hkl[0]
                k = chosen_actionList[t].hkl[1]
                l = chosen_actionList[t].hkl[2]
                A = 5.417799
                B = 5.414600
                C = 12.483399

                qsq = (h/A)**2 + (k/B)**2 + (l/C)**2
                qSquared.append(qsq)

                #Update things
                final_zs[simulation] = model.atomListModel.atomModels[0].z.value
                total_rewards[simulation] += reward

                if (simulation % 25 == 0):
                    zs.append(model.atomListModel.atomModels[0].z.value)


                #output to files - hardcoded

                file.write("\n" + str(chosen_actionList[t].hkl).replace("[","").replace("]","").replace(",",""))
                file.write("\t\t\t" + str(round(reward,2)) + "\t\t" + str(round(total_rewards[simulation],2)) + "\t\t" + str(round(chiSq,2)) + "\t\t" + str(round(model.atomListModel.atomModels[0].z.value,5)))
                file.write("\t" + str(error[chosen_action]) + "\t" + str(tt[chosen_action]) + "\t" + str(sfs2[chosen_action]))
    #	    file.write("\t" + str(round(model.atomListModel.atomModels[0].B.value,2)))
    #	    file.write("\t" + str(round(model.atomListModel.atomModels[1].B.value,2)))
    #	    file.write("\t" + str(round(model.atomListModel.atomModels[2].B.value,2)))
    #	    file.write("\t" + str(round(model.atomListModel.atomModels[3].B.value,2)))
    #	    file.write("\t" + str(round(model.atomListModel.atomModels[4].B.value,2)))
    #	    file.write("\t" + str(round(model.atomListModel.atomModels[5].B.value,2)))

                #TODO Maybe change this cutoff thing
                if (((t > 13) and (chiSqs[t] > chiSqs[t-1]) and (chiSqs[t-1] > chiSqs[t-2]) and (chiSqs[t-2] > chiSqs[t-3])) or (t > 100)):
    #	    if ((t > 10) and (chiSq < 2)) or t > 100:
                    break

            speeds[simulation] = t

            if (simulation % 25 == 0):
                #Save how the agent updates z every 25 simulations
                z_progression.append(zs)
                #Save what the agent has learned every 25 simulations
                file2 = open("set" + str(i) + "/Rewards" + str(simulation) + ".txt", "w")
                file2.write("Number of epochs: " + str(simulation))
                np.savetxt("Rewards" + str(simulation) + ".txt", agent.values)
                file2.close()

            #Pretty graphs per simulation
    #	x1 = sfs2[0:t+1]
            sfs2_calc = model.theory()
            sfs2_obs = np.zeros(len(sfs2_calc))
            for j in range(len(sfs2_calc)):
                sfs2_obs[j] = sfs2[d[str(chosen_actionList[j].hkl).replace("[","").replace("]","").replace(",","")]]

            plt.figure()
            plt.scatter(qSquared,sfs2_calc)
            plt.scatter(qSquared,sfs2_obs)
            plt.savefig("set" + str(i) + "/sfs2s vs Qsq " + str(simulation) + ".png")
            plt.close()

            plt.figure()
            plt.scatter(sfs2_obs,sfs2_calc)
            plt.savefig("set" + str(i) + "/Calc vs Obs " + str(simulation) + ".png")
            plt.close()


    #	zInit = model.atomListModel.atomModels[0].z.value
            file.close()


        #graphs over all simulations
        z_resids = np.zeros(len(final_zs))
        for j in range(len(z_resids)):
            z_resids[j] = final_zs[j] - 0.35973

        plt.figure()
        plt.plot(list(range(num_sims)), final_zs)
        plt.savefig("set" + str(i) + "/Z Approximations per Simulation")
        plt.close()

        plt.figure()
        plt.plot(list(range(num_sims)), z_resids)
        plt.savefig("set" + str(i) + "/Z Approximation Residuals per Simulation")
        plt.close()

        plt.figure()
        plt.scatter(list(range(num_sims)), speeds)
        plt.savefig("set" + str(i) + "/Speed of Simulations")
        plt.close()

    #    plt.figure()
    #    plt.plot(list(range(num_sims)), total_rewards)
    #    plt.savefig("Total Reward per Simulation")
    #    plt.close()
        plt.figure()
        for j in z_progression:
            plt.plot(list(range(len(j))), j)
        plt.savefig("set" + str(i) + "/Z Approximation Comparison")
        plt.close()

    return



########################################################
##This stuff was to make an ideal calc sfs2 vs obs sfs2 graph and basically not needed anymore
#x2 = sfs2#

#model1 = setInitParams()
#model1.refList = H.ReflectionList(refList)
#model1._set_reflections()
#model1.error = error
#model1.tt  = tt
#model1._set_observations(sfs2)

#y1 = model1.theory()

#plt.scatter(x2,y1)
#plt.savefig('sfs2stest.png') 
#########################################################


agent = EpsilonGreedy(1, np.zeros(len(refList)), np.ones(len(refList)))
test_algorithm(agent, refList, 2, 2, len(refList), 1)
print("done")
