import numpy
r=int(input("Row:"))
c=int(input("Col:"))
l=[]
for i in range(r):
    l.append([])
for i in range(r):
    for j in range(c):
        l[i].append(int(input("Enter element:")))
print("Element:")
for i in range(r):
    for j in range(c):
        print(l[i][j],end=' ')
    print()
print("Output:")
for i in range(r):
    for j in range(c):
        print(l[j][i],end=' ')
        l[i][j]=0
    print()


