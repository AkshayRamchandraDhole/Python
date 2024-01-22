num = 1
for i in range(7):
    if(i < 4):
        for j in range(i + 1):
            print(num, end = "")
            if(j != 3):
                num+=1
    else:
        for j in range(7 - i):
            num-=1
            print(num, end = "")
    print()
