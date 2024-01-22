num = int(input("Input : "))
for i in range(1, int((num / 2)) + 1):
    print(i + 1, end = " ") if num % (i + 1) == 0 else print("", end = "")
