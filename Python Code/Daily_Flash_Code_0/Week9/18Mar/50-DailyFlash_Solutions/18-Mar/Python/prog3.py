def isStrong(num):
    s = 0
    temp = num
    while(temp != 0):
        rem = temp % 10
        fact = 1
        for i in range(1, rem + 1):
            fact *= i
        s += fact
        temp = int(temp / 10)
    if(s == num):
        return True
    return False
while(True):
    num = int(input("Enter num : "))
    if(isStrong(num)):
        break
    print(num)
