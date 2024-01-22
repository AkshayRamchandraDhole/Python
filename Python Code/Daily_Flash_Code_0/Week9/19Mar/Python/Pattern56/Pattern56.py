z=1
for i in range(1,5):
    for j in range(1,8):
        if(i<=j and j<=8-i):
            if(i%2==0):
                print(x,end=' ')
                x-=1
            else:
                print(j,end=' ')
                x=j
        else:
            print(" ",end=' ')
    print()
