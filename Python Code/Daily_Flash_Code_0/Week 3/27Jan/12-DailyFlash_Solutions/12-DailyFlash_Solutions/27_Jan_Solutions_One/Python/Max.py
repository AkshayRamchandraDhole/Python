num1 = input("Enter number1 : ")
num2 = input("Enter number2 : ")
num3 = input("Enter number3 : ")

if num1>num2 and num1>num3:
    print(str(num1)+" is Maximum")
elif num2>num1 and num2>num3:    
    print(str(num2)+" is Maximum")
elif num3>num1 and num3>num2:
    print(str(num3)+" is Maximum")

