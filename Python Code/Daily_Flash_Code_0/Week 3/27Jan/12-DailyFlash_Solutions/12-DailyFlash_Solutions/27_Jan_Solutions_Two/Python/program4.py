
n = 0
try:
    n = int(input("Enter Size : "))
    if(n < 0):
        print("Enter Positive Number")
        exit(0)
except ValueError as e:
    print("Enter valid Number")
    pass

flag = 1
for i in range(n, 0, -1) :
    for j in range(0, n-i+1):
        print(flag*flag, end = "\t")
        flag+=1;
    print()
