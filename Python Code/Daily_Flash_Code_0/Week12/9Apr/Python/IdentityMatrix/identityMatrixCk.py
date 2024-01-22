import numpy
m=int(input("Enter Row:"))
n=int(input("Enter Col:"))
l=[]
l1=[[1,0,0],[0,1,0],[0,0,1]]
for i in range(0,m):
    l.append([])
for i in range(0,m):
    for j in range(0,n):
        l[i].append(int(input("Enter element:")))
if(l1==l):
    print("Entered element is an identity matrix")
else:
    print("Entered element is not identity matrix")
