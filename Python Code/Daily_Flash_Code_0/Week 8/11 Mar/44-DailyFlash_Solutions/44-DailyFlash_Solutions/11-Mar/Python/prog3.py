while(True):
    num = int(input())
    if(num <  0):
        exit()
    else:
        fact = 1
        for i in range(1, num + 1):
            fact *= i
        print(fact)
