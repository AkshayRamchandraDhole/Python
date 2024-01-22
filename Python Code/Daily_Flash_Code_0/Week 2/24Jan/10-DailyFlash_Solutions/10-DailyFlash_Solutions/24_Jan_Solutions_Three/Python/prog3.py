num = int(input("Input : "))
for i in range(num):
    print((i + 1) * (i + 1) * (i + 1)) if (i + 1) % 2 == 1 else print("", end = "")
