x=0
y=6
for i in range(0,4):
    
    for j in range(0,7):
        if(i<=j and j<7-i):
            if(i==0 or i==1):
                print(x,end=' ')
                x+=1
            elif(i==2):
                print(y,end=' ')
                y+=1
            else:
                print("12",end=' ')
        else:
            print(" ",end=' ')
    print()
    x=0
    x+=2
