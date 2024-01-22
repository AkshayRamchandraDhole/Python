num1 = int(input("num1 : "))
num2 = int(input("num2 : "))
while(True):
    rem = num1 % num2
    if(rem == 0):
        break
    num1 = num2
    num2 = rem
print("gcd : ", num2)
