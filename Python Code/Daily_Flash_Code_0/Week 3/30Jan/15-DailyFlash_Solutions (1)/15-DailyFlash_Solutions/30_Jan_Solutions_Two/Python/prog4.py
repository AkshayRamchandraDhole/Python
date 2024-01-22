var = 7
for i in range(4):
    for j in range(i + 1):
        if(j > 0):
            var -= 1;
        print(var, end = " ")
    print()
