"""
Remake model from hkls and final z approx
"""
import numpy as np
import random
import os,sys;sys.path.append(os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))))
import matplotlib as mpl
import matplotlib.pyplot as plt

import fswig_hklgen as H
import hkl_model as Mod
import sxtal_model as S

import bumps.names as bumps
import bumps.fitters as fitter
from bumps.formatnum import format_uncertainty_pm

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

def setInitParams():
    #Make a cell
    cell = Mod.makeCell(crystalCell, spaceGroup.xtalSystem)
    #Define a model
    m = S.Model([], [], backg, wavelength, spaceGroup, cell,
                [atomList], exclusions,
                scale=0.062978, error=[],  extinction=[0.000105])
    #Set a range on the x value of the first atom in the model
    m.atomListModel.atomModels[0].z.value = 0.35
    m.atomListModel.atomModels[0].z.range(0,0.5)
    return m

x = sfs2

model = setInitParams()
model.refList = H.ReflectionList(refList)
model._set_reflections()
model.error = error
model.tt  = tt
model._set_observations(sfs2)

y = model.theory()

#plt.scatter(x,y)
#plt.savefig('sfs2s.png') 

