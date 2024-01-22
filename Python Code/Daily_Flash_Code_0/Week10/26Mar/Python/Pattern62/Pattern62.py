
for i in range(0,7):
    x=72
    for j in range(0,4):
        if(j<=i and i<7-j):
            if(j<2):
                print(chr(x),end=' ')
                x-=3
            else:
                print("L",end=' ')
            
        else:
            print(" ",end=' ')
    print()
