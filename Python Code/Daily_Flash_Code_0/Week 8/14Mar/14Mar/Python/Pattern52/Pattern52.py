z=0
for i in range(0,4):
    for j in range(0,7):
        if(j>=3-i and j<=3+i):
            print(z+i*j,end=' ')
        else:
            print(" ",end=' ')        
    print()
