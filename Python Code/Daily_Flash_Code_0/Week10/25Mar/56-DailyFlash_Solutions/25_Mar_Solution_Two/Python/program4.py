k = 1
n = int(input("Enter Number : "))
for i in range(1, n*2):
    for j in range(1, n+1):
        if j <= i and i <= n:
                print(k, end = "\t")
                k+=1
        elif i > n and j > i - n:
            k-=1
            print(k ,end = "\t")
    if(i == n):
        k -= 1
    print()
