
n = int(input("Enter Number : "))
for i in range(1,n+1):
    for j in range(1, n*2):
        if(j > n - i and j < n + i):
            print(chr(64+j-(n-i)), end = "\t")
        else:
            print(end = "\t")
    print()
