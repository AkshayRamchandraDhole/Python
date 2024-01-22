num1, num2 = [int(i) for i in input("Input : ").split()]
for i in range(num1, num2 + 1):
    print(i, end = " ") if i % 2 == 1 else print("", end = "")
