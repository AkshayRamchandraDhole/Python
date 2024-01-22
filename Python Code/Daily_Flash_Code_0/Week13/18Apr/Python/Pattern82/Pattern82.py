n=10
p=1
for x in range(1,n+1):
    for y in range(1,n+1):
        if(y<=p or y>=n-p+1):
            print("*",end=" ")
        else:
            print(" ",end=" ")
    if(x<=n/2):
        p+=1
    else:
        p-=1
    print()
