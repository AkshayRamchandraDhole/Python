for i in range(0,4):
    for j in range(0,7):
        if(j>=3-i and j<=3+i):
            print(chr(j+65),end=' ')
        else:
            print(" ",end=' ')
    print()

