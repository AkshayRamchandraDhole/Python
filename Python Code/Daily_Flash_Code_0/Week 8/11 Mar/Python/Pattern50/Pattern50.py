fib=0
sno=1 
for i in range(0,4):
    for j in range(0,7):
        if(j>=3-i and j<=3+i):
            print(fib,end='\t')
            su=fib+sno
            fib=sno
            sno=su
        else:
            print(" ",end='\t')
    print()