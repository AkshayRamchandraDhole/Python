import numpy
l=[]
r=int(input("Enter Row:"))
c=int(input("Enter Col:"))
for i in range(r):
    l.append([])
for i in range(r):
    for j in range(c):
        l[i].append(int(input("Enter Element:")))
print("Element:")
for i in range(r):
    for j in range(c):
        print(l[i][j],end=' ')
    print()
print("Output:")
for i in range(r):
    for j in range(c):
        print(l[j][i],end=' ')
    print()
