def isAng(num):
    s = 0
    temp = num
    while(temp != 0):
        rem = temp % 10
        s += rem * rem * rem
        temp = int(temp / 10)
    if(s == num):
        return True
    return False
while(True):
    num = int(input("Enter num : "))
    if(isAng(num)):
        break
    print(num)
