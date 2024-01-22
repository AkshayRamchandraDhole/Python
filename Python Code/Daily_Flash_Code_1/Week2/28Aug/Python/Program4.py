r=int(input("Enter Row:"))
s=input("Enter Sign:")
m=r/2
m=int(m)
for i in range(r):
    for j in range(r):
        if((i+j < m and i < m) or (i-j > m) or (j-i > m and i < m) or (i+j >= r+m)):
            print(" ",end="")
        elif(i<=m):
            print(s,end="")
        else:
            print(s,end="")
    print()

