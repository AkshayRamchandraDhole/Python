num = 1;
for i in range(4):
    for j in range(i + 1):
        print(num * num * num, end = " ")
        num += 1;
    print()
