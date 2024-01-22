r=int(input("Enter Row:"))
c=int(input("Enter Col:"))
for i in range(r):
    for j in range(c):
        if(i<r-j and j<=i):
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()

