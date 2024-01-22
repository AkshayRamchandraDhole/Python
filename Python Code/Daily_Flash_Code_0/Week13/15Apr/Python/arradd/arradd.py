import numpy
l1,l2,l3=[],[],[]
r=int(input("Enter Row:"))
c=int(input("Enter Col:"))
for i in range(r):
    l1.append([])
    l2.append([])
    l3.append([])
for i in range(r):
    for j in range(c):
        l1[i].append(int(input("Enter 1st array element:")))
        l2[i].append(int(input("Enter 2nd array element:")))
print("Matrix 1:")
for i in range(r):
    for j in range(c):
        print(l1[i][j],end=" ")
    print()
print("Matrix 2:")
for i in range(r):
    for j in range(c):
        print(l2[i][j],end=" ")
    print()
l3=[[0,0],[0,0]]
print("Matrix 3:")
for i in range(len(l1)):
    for j in range(len(l1[0])):
        l3[i][j]=l1[i][j]+l2[i][j]
for i in range(r):
    for j in range(c):
        print(l3[i][j],end=" ")
    print()
