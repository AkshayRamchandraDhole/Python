import numpy
r=int(input("Enter row:"))
c=int(input("Enter col:"))
l1=[]
l2=[]
for i in range(r):
    l1.append([])
    l2.append([])
for i in range(r):
    for j in range(c):
        l1[i].append(int(input("Enter first array element:")))
        l2[i].append(int(input("Enter second array element:")))
print("First Matrix:")
for i in range(r):
    for j in range(c):
        print(l1[i][j],end=" ")
    print()
print()
print("Second Matrix:")
for i in range(r):
    for j in range(c):
        print(l2[i][j],end=" ")
    print()

if(l1==l2):
    print("Both Equal")
else:
    print("Not Equal")
