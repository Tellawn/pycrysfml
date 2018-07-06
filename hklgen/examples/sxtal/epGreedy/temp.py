import os,sys;sys.path.append(os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))))
import matplotlib.pyplot as plt
import matplotlib as mpl
import numpy as np

file = open("MASTERFILE.txt","r")
data = file.read()
data = data.split("\n")

fig = plt.figure()
print("test")

#fig.set_title("Z Coords")
#fig.set_xlabel("t")
#fig.set_ylabel("Z Approximation")


for i in range(len(data)):
    if (data[i] != ''):
        data[i] = float(data[i])

mpl.pyplot.plot(data)
mpl.pyplot.xlabel("t")
mpl.pyplot.ylabel("Z Values")
fig.show()
