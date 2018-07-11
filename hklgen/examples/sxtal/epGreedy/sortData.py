"""
Sort the rows of an epGreedy output file to the right HKL order and plotting calculated sfs2 vs observed sfs2
This is hardcoded
"""


file = open("epGreedyResults499.txt", "r")
#Gets rid of the first line of the file
file.readline()

data = file.read()
print(data)
