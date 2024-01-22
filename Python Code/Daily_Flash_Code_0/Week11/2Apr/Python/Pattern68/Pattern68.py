x=65
y=0
for i in range(5):
    for j in range(3):
        if(i<3):
            if(j<2-i):
                print(" ",end='\t')
            else:
                print(chr(x),end='\t')
                x+=1
                y=x-2
        else:
            if(j<i-2):
                print(" ",end='\t')
            else:
                print(chr(y),end='\t')
                y-=1
    print()
