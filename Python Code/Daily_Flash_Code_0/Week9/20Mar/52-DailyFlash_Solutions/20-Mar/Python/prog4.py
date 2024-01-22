ch = 65
for i in range(4):
    num = i * 2;
    for j in range(7 - i):
        if(j < i):
            print("", end = "\t")
        else:
            print(chr(ch),num, end = "\t")
            ch += 1
            num += 1
    print()
