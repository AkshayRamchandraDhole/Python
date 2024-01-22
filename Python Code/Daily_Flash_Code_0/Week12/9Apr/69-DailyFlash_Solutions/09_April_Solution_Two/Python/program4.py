
n = int(input("Enter Limit : "))

for i in range(1, n*2):
    for j in range(1, n+1):
        if(i <= n and j <= i):
            print(chr(64+i),end = "\t")
        elif i > n and j > i-n:
            print(chr(64+n-(i-n)),end = "\t")
    print()


