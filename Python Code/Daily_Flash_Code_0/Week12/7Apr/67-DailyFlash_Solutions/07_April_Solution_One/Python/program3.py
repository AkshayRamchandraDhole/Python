
import numpy
m = int(input("Row : "))
n = int(input("Col : "))
l = []
for i in range(0,m):
    l.append([])
for i in range(0,m):
    for j in range(0,n):
        l[i].append(int(input()))


for i in range(0,m):
    for j in range(0,n):
        if(i==j):
            print(l[i][i])

