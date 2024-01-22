x=8
z=0
for i in range(4):
    for j in range(7):
        if(i<=j and j<7-i):
            if(j<=3):
                print(x,end='\t')
                x-=1
                z=x+2
            else:
                print(z,end='\t')
                z+=1
        else:
            print(" ",end='\t')
    print()
    x=z-2
    
    
