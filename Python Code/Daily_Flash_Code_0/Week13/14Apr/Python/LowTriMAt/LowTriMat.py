import numpy
l=[]
r=int(input("Row:"))
c=int(input("Col:"))
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
        if(i>=j):
            print(l[i][j],end=' ')
        else:
            l[i][j]=0
            print(l[i][j],end=' ')
    print()
    

