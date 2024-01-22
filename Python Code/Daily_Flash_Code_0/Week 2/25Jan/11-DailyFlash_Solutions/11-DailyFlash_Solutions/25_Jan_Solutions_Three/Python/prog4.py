for i in range(5):
    for j in range(i + 1):
        print("a ", end = " ") if i % 2 == 0 else print("A ", end = " ")
    print()
