n = int(input("Enter Number : "))

k = 64
for i in range(1, n*2):
    for j in range(n, 0,-1):
        if j <= i and i <= n:
            k+=1
            print(chr(k), end = "\t")
        elif i > n and j <= n - (i-n):
            k-=1
            print(chr(k),end = "\t")
        else:
            print(end="\t")
    print()
