
n = 0
try:
    n = int(input("Enter Size : "))
    if(n < 0):
        print("Enter Positive Number")
        exit(0)
except ValueError as e:
    print("Enter valid Number")
    pass

for i in range(n, -1, -1) :
    for j in range(i, n+1):
        print(j, end = "\t")
    print()
