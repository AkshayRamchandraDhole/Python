x=1
for i in range(0,7):
    for j in range(0,4):
        if(i<7-j and j<=i):
            if(i<4):
                print(x,end=' ')
                x+=1
                z=x-2
            else:
                print(z,end=' ')
                z-=1
        else:
            print(" ",end=' ')
    print()
