for i in range(100):
    print(i + 1, end = " ") if (i + 1) % 3 == 0 or (i + 1) % 5 == 0 else print("", end = "")
