for i in range(4):
    for j in range(7):
        if(j==3 and i>=0):
            print("1",end='\t')
        elif(j>=3-i and j<=3+i):
            print("0",end='\t')
        else:
            print(" ",end='\t')
    print()
