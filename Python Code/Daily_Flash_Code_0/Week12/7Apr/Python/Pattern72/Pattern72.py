for i in range(4):
    for j in range(7):
        if(j<=3+i and j>=3-i):
            if(j%2==0):
                print("0",end='\t')
            else:
                print("1",end='\t')
        else:
            print(" ",end='\t')
    print()
