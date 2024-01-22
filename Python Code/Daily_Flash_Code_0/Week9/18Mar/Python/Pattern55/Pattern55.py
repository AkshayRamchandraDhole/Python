:wwfor i in range(1,5):
    for j in range(1,8):
        if(i<=j and j<=8-i):
            if(j%2==0):
                print("0",end=' ')
            else:
                print("*",end=' ')
        else:
            print(" ",end=' ')
    print()
