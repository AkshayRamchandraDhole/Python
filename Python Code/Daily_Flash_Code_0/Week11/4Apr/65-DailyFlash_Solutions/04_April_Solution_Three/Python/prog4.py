for i in range(9):
    for j in range(5):
        if(i < 5):
            if(j < 4 - i):
                print("", end = " ")
            else:
                if(j == 4):
                    print("O", end = "")
                if(j == 2 or j == 3):
                    print("L", end = "")
                if(j == 1):
                    print("E", end = "")
                if(j == 0):
                    print("H", end = "")
        else:
            if(j < i - 4):
                print("", end = " ")
            else:
                if(j == 4):
                    print("O", end = "")
                if(j == 2 or j == 3):
                    print("L", end = "")
                if(j == 1):
                    print("E", end = "")
                if(j == 0):
                    print("H", end = "")
    print()
