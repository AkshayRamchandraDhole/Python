for i in range(3):
    for j in range(4 - i):
        if(j % 2 == 0):
            print("+ ", end = " ")
        else:
            print("= ", end = " ")
    print()
