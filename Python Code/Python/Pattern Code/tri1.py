def fibo():
    f1=0
    f2=1 
    for i in range(1):
        f3=f1+f2
        print(f3)
        f1=f2
        f2=f3
        
for i in range(0,4):
    for j in range(0,7):
        if j < 4:
            if j<3-i:
                print(" ",end=' ')
            else:
                print("*",end=' ')
        else:
            if(j<4+i):
                print("*",end=' ')
    print()