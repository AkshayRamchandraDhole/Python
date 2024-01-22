
for i in range(4):
    num = i * (i + 1);
    for j in range(7 - i):
        if(j < i):
            print("", end = "\t")
        else:
            print(num, end = "\t")
        
            num += 1
    print()
