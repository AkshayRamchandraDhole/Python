inc=1
for i in range(5,0,-1):
    for j in range(i,0,-1):
        print(" ",end='')
    for k in range(1,inc+1):
        f1=0
        f2=1 
        for i in range(j):
            f3=f1+f2
            print(f3,end='')
            f1=f2
            f2=f3
    inc+=2
    print()