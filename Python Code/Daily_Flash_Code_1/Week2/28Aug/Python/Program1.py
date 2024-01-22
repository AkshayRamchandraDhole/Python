r=int(input("Enter Row :"))
w=int(input("Enter Col :"))
s=input("Enter Sign you want to print:")
for i in range(0,r):
    for j in range(0,w):
        if(j>=3-i and j<=3+i):
            print(s,end=' ')
        else:
            print(" ",end=' ')
    print()
    
