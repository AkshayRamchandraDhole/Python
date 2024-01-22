for i in range(4):
    for j in range(4):
        if(i + j < 3):
            print("   ", end = " ")
        elif(i + j == 3):
            print("3  ", end = " ")
        else:
            print(j * (j + i), "  ", end = "")
    print()
