x=65
for i in range(0,4):
    for j in range(0,7):
        if(i<=j and j<7-i):
            print(j,chr(x),end='\t')
            x+=1
        else:
            print(" ",end='\t')
    print()
