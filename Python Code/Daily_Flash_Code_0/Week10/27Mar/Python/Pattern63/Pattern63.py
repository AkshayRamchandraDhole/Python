for i in range(0,7):
    x=72
    y=79
    for j in range(0,4):
        if(i<7-j and j<=i):
            if(j==0 or j==3):
                print(chr(x),end='\t')
                x-=3
            else:
                print(chr(y),end='\t')
                y-=2
        else:
            print(" ",end=' ')
    print()
