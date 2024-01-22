
n = int(input("Enter Number : "))
for i in range(n,0,-1):
    for j in range(1, n+i):
        if j > n - i:
            print("*", end = "\t")
        else:
            print(end = "\t")
    print()
