import numpy
l=[]
r=int(input("Enter row:"))
c=int(input("Enter col:"))
for i in range(r):
    l.append([])
for i in range(r):
    for j in range(c):
        l[i].append(int(input("Enter element:")))
print("Element:")
for i in range(r):
    for j in range(c):
        print(l[i][j],end=" ")
    print()
sr=0
sc=[]
for i in range(r):
    for j in range(c):
        a=l[i][j]
        sr+=a
    sc.append(sr)
    sr=0
print("Sum of element of rows:")
for i in sc:
    print(i,end=" ")
print()
sr1=0
sc1=[]
for i in range(r):
    for j in range(c):
        a1=l[j][i]
        sr1+=a1
    sc1.append(sr1)
    sr1=0
print("Sum of element of cols:")
for i in sc1:
    print(i,end=" ")
print()


        
        
