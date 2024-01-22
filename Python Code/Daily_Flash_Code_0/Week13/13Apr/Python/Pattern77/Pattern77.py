r=int(input("Enter Row:"))
m=r/2
m=int(m)
for i in range(r):
    for j in range(r):
        if((i+j < m and i < m) or (i-j > m) or (j-i > m and i < m) or (i+j >= r+m)):
            print(" ",end="\t")
        elif(i<=m):
            print(i+1,end="\t")
        else:
            print(((2*m)-i+1),end="\t")
    print()

