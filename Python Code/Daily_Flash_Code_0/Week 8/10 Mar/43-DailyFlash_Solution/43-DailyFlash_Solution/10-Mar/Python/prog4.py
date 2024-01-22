for i in range(4):
    ch = 65
    for j in range(7):
        if(j < 4):
            if(j >= 3 - i):
                print(chr(ch), end = "")
                ch += 1
            else:
                print(end = " ")
        else:
            if(j < 4 + i):
                print(chr(ch), end = "")
                ch += 1
    print()
