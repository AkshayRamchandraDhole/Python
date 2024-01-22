x=8
for i in range(7):
    for j in range(4):
        if(i<4):
            if(j<3-i):
                print(" ",end='\t')
            else:
                print(x,end='\t')
                z=x
        else:
            if(j<i-3):
                print(" ",end='\t')
            else:
                print(z,end='\t')
    print()
    x=x-2
    z=z+2
