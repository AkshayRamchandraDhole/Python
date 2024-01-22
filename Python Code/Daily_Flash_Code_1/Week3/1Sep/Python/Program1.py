r=int(input("Enter Row:"))
x=1
for i in range(1,r+1):
    for j in range(1,r+1):
        if(j <= x or j >= r - x + 1):
            print("*",end=" ")
        else:
            print(" ",end=" ")
    if(i <= r/2):
        x+=1
    else:
        x-=1
    print()
