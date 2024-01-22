
n = int(input("Enter Limit : "))
for i in range(1, 2*n):
    for j in range(1, 2*n):
        if(i==j or j == (2*n - i)):
            print("X", end = "\t")
        else:
            print(end = "\t")
    print()


