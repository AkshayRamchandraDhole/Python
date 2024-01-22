import numpy
r=int(input("Enter Row:"))
c=int(input("Enter Col:"))
l1=[]
l2=[]
for i in range(r):
    l1.append([])
    l2.append([])
for i in range(r):
    for j in range(c):
        l1[i].append(int(input("Enter 1st array element:")))
        l2[i].append(int(input("Enter 2nd array element:")))
print("Matrix 1:")
for i in range(r):
    for j in range(c):
        print(l1[i][j],end=" ")
    print()
print()
print("Matrix 2:")
for i in range(r):
    for j in range(c):
        print(l2[i][j],end=" ")
    print()
print()
l3=[[0,0],[0,0]]
for i in range(len(l1)):
    for j in range(len(l1[0])):
        a=l1[i][j]
        b=l2[i][j]
        if(a>b):
            l3[i][j]=a/b
        else:
            l3[i][j]=b/a
print("Matrix 3:")
for i in range(r):
    for j in range(c):
        print(abs(l3[i][j]),end=" ")
    print()

