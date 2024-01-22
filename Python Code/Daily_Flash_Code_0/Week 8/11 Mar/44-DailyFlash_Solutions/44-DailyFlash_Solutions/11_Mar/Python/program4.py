
n = int(input("Enter Number : "))
a = 0
b = 1
c = a + b
for i in range(1,n+1):
    for j in range(1, n*2):
        if(j > n - i and j < n + i):
            print(a, end = "\t")
            a = b
            b = c
            c = a + b
        else:
            print(end = "\t")
    print()
