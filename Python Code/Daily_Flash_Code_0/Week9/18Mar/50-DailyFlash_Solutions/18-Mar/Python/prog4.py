for i in range(4):
    for j in range(7 - i):
        if(j < i):
            print("", end = " ")
        else:
            print("*", end = "") if j % 2 == 0 else print("0", end = "")
    print()
