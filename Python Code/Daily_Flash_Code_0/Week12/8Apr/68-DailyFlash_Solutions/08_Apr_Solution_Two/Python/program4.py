
n = int(input("Enter Limit : "))

for i in range(1, n+1):
    for j in range(1, n*2):
        if(j > n-i and j < n+i):
            if j<=n:
                print(j,end = "\t")
            else:
                print(n-(j-n),end = "\t")
        else:
            print(end = "\t")
    print()


