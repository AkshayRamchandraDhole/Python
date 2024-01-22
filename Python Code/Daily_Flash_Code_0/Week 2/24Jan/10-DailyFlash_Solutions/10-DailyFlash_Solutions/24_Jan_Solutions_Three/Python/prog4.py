for i in range(5):
    for j in range(i + 1):
        print("0 ", end = " ") if i % 2 == 0 else print("1 ", end = " ")
    print()
