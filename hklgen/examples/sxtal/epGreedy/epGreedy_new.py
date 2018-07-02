import random
import numpy as np
import os

class EpsilonGreedy():
    def __init__(self, epsilon, counts, values):
        self.epsilon = epsilon
        self.counts = counts
        self.values = values
        return
    def initialize(self, counts, values):
        self.counts = counts
        self.values = values
        return

    def getCounts(self):
        return self.counts

    def getValues(self):
        return self.values

    def bestReward(self):
        rewardMax = 0
        maxIndices = []
        for i in range(len(self.values)):
            if self.values[i] > rewardMax:
                rewardMax = self.values[i]
        for i in range(len(self.values)):
            if self.values[i] == rewardMax:
                maxIndices.append(i)
        return maxIndices

    def select_action(self):
        coin = random.random()
        if coin > self.epsilon:
            return random.choice(self.bestReward())
        else:
            return random.randint(0, len(self.values))

    def update(self, chosen_action, reward):
        self.counts[chosen_action] += 1
        n = self.counts[chosen_action]
        value = self.values[chosen_action]
        self.values[chosen_action] = self.values[chosen_action] * (n-1.0)/n + float(reward)/n
        return

#BUMPS/FIT

def test_algorithm(agent, actions, num_sims, horizon):
    chosen_actionList = np.zeros((num_sims, horizon))
    rewards = np.zeros((num_sims, horizon))

    

        
