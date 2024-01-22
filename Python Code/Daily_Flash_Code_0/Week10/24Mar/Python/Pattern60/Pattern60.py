for i in range(0,7):
    for j in range(0,4):
        if(i<7-j and j<=i):
            print("*",end=' ')
        else:
            print(" ",end=' ')
    print()
