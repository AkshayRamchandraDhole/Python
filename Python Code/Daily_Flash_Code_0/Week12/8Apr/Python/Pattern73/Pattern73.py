for i in range(1,5):
    for j in range(1,8):
        if(j>4-i and  j<4+i):
            if(j<=4):
                print(j,end='\t')
                x=j-1
            else:
                print(x,end='\t')
                x-=1
        else:
            print(" ",end='\t')
    print()
