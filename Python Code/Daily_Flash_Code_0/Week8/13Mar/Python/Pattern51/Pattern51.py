for i in range(0,4):
    for j in range(0,7):
        if(j==3 and i>=0):
            print("#",end=' ')
        elif(j>=3-i and j<=3+i):
            print("*",end=' ')

        else:
            print(" ",end=' ')
    print()
