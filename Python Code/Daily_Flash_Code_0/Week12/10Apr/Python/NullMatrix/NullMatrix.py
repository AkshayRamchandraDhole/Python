import numpy
m=int(input("Enter Row:"))
n=int(input("Enter Col:"))
l=[]
for i in range(0,m):
    l.append([])
for i in range(m):
    for j in range(n):
        l[i].append(int(input("Enter Element:")))

for i in range(m):
    for j in range(n):
        l[i][j]=0
for i in range(m):
    for j in range(n):
        print(l[i][j],end=' ')
    print()

