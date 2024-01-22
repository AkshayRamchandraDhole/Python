for i in range(0,4):
    for j in range(0,7):
        if(i<=j and j<7-i):
           print(j+1,end=' ')
        else:
            print(" ",end=' ')
    print()
