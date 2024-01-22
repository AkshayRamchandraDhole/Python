l = input("Enter String : ")
n = len(l)
for i in range(1, n*2):
    for j in range(n,0,-1):
        if j <= i and i <= n:
                print(l[n-j], end = "\t")
        elif i > n and j <= n - (i-n):
            print(l[n-j] ,end = "\t")
        else:
            print(end = "\t")
    print()
