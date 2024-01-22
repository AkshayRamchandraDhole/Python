try:
    n = int(input("Enter Number : "))
except ValueError as e:
    exit(0)
for i in range(1,n+1):
    for j in range(n,0,-1):
        if(j > i):
            print(end = "\t")
        else:
            print(str(chr(64+j))+str((i-j+3)), end = "\t")
    print()
