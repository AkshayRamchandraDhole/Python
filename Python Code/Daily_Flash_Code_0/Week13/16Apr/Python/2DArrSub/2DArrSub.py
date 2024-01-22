import numpy
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
l3=[[0,0],[0,0]]
for i in range(len(l1)):
    for j in range(len(l1[0])):
        a=l1[i][j]
        b=l2[i][j]
        l3[i][j]=a-b
    print()
print("Matrix After Substract:")
for i in range(r):
    for j in range(c):
        print(abs(l3[i][j]),end=" ")
    print()
    


