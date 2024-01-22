import numpy
r=int(input("Row:"))
c=int(input("Col:"))
l1=[]
for i in range(r):
    l1.append([])
for i in range(r):
    for j in range(c):
        l1[i].append(int(input("Enter Element:")))
for i in range(c):
     l1[i][2] = 2*(l1[i][2]) + (l1[i][1])
for i in range(c):
    l1[i][1]=3*(l1[i][1])-(l1[i][0])
for i in range(c):
    l1[i][2]=3*(l1[i][2])
print("After all Operation:")
for i in range(r):
    for j in range(c):
        print(l1[i][j],end=" ")
    print()

