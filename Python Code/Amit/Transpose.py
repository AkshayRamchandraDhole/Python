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
v=3
for i in range(0,int(r/2)):
    for j in range(i,v-i-1):
        tmp=l[i][j]
        l[i][j]=l[j][v-1-i]
        l[j][v-1-i]=l[v-1-i][v-1-j]
        l[v-1-i][v-1-j]=l[v-1-j][i]
        l[v-1-j][i]=tmp
    print()
for i in range(r):
    for j in range(c):
        print(l[i][j],end=' ')
    print()

