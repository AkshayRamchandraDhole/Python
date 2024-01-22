k = 1
n = int(input("Enter Number : "))
for i in range(n,0,-1):
    for j in range(1, n+i):
        if j > n - i and (n-i+1) % 2 == 1:
                print(k, end = "\t")
                k+=1
        elif j > n - i and (n-i+1) % 2 == 0:
                print(k, end = "\t")
                k-=1
        else:
            print(end = "\t")
    if((n-i+1)%2== 1):
        k-=1
    else:
        k+=1
    print()
