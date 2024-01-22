k = 1
inc = 0
n = int(input("Enter Number : "))
ch = 65
for i in range(n,0,-1):
    k = inc
    for j in range(1, n+i):
        if j > n - i:
                print(chr(ch),k, end = "\t")
                k+=1
                ch+=1
        else:
            print(end = "\t")
    inc += 2
    print()
