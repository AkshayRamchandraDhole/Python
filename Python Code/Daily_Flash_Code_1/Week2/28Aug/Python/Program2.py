	r=int(input("Enter Row:"))
s=input("Enter Sign:")
px=r // 2+1
for i in range(1,r+1):
    for j in range(1,r+1):
        if(j==px or j==r-px+1):
            print(s,end=" ")
        else:
            print(" ",end=" ")
    if(i <= r / 2):
        px-=1
    else:
        px+=1
    print()


