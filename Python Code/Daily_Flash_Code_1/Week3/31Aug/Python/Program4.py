r=int(input("Enter Row:"))
c=int(input("Enter Col:"))
for i in range(r):
    for j in range(c):
        if(i>=(c-1)-j and i<=(c-1)+j):
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()

