r=int(input("Enter Size:"))
x=r
y=r
for i in range(1,r+1):
    n=1
    for j in range(1,r*2):
        if(j==x or j==y or i==r):
            print(n,end=" ")
            n+=1
        else:
            print(" ",end=" ")
    x-=1
    y+=1
    print()
