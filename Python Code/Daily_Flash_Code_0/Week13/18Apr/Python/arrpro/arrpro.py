import numpy as np
l1,l2,l3=[],[],[]
r=int(input("Row:"))
c=int(input("Col:"))
for i in range(r):
    l1.append([])
    l2.append([])
for i in range(r):
    for j in range(c):
        l1[i].append(int(input("Enter 1st Matrix element:")))
        l2[i].append(int(input("Enter 2nd Matrix element:")))
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
for i in range(r):
    for j in range(c):
        l3=0
l3=np.dot(l1,l2)
print("Matrix 3:")
for i in range(r):
    for j in range(c):
        print(l3[i][j],end=" ")
    print()
    


