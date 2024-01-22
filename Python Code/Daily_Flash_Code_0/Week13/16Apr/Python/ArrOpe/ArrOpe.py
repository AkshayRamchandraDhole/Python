import numpy
r=int(input("Enter Row:"))
c=int(input("Enter Col:"))
l1=[]
for i in range(r):
    l1.append([])
for i in range(r):
    for j in range(c):
        l1[i].append(int(input("Enter Element:")))
print("Element:")
for i in range(r):
    for j in range(c):
        print(l1[i][j],end=" ")
    print()
l2=[[0,0,0],[0,0,0],[0,0,0]]
l2[0][0]=2*l1[0][0]+3*l1[1][0] 
l2[0][1]=2*l1[0][1]+3*l1[1][1]
l2[0][2]=2*l1[0][2]+3*l1[1][2]

l2[1][0]=2*l1[1][0]-l1[2][0]
l2[1][1]=2*l1[1][1]-l1[2][1]
l2[1][2]=2*l1[1][2]-l1[2][2]

l2[2][0]=4*l1[2][0]
l2[2][1]=4*l1[2][1]
l2[2][2]=4*l1[2][2]
print("After All the operation:")
for i in range(len(l2)):
    for j in range(len(l2[0])):
        print(l2[i][j],end=" ")
    print()


