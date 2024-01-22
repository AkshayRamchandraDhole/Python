k = 1
inc = 0
n = int(input("Enter Number : "))
for i in range(n,0,-1):
    k = inc
    for j in range(1, n+i):
        if j > n - i:
                print(k, end = "\t")
                k+=1
        else:
            print(end = "\t")
    inc += 2
    print()
