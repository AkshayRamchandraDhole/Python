num = 1
for i in range(4):
    for j in range(7 - i):
        if(j < i):
            print("", end = " ")
        else:
            if(i % 2 == 0):
                print(num, end = "")
                num += 1
                if(j == 6 - i):
                    num -= 1
            else:
                print(num, end = "")
                num -= 1
                if(j == 6 - i):
                    num += 1
    print()
