for i in range(100):
    print(i + 1, end = " ") if (i + 1) % 4 == 0 and (i + 1) % 7 == 0 else print("", end = "")
