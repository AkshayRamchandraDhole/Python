x=5
y=6

for i in range(0,4):
    for j in range(0,7):
        if(i<=j and j<7-i):
            if(i==1):
                print(y,end='\t')
                y+=1
                z=y-2
            elif(i==2):
                print(z,end='\t')
                z+=2
            else:
                print(x,end='\t')
        else:
            print(" ",end='\t')
            x+=1
    print()
    

