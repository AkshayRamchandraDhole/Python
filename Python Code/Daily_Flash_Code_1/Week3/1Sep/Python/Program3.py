s=int(input("Enter Size:"))
m=s//2
m=int(round(m)+1)
for i in range(1,s+1):
    for j in range(1,s+1):
        if(i==j or i+j == s+1 ):
            print("*",end=" ")
        elif(i==m):
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()
