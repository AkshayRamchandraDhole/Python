num1 = input("Enter the number1 ")
num2 = input("Enter the number2 ")
num3 = input("Enter the number3 ")

if num1<num2 and num1<num3:
    print(str(num1)+" is minimum")
elif num2<num1 and num2<num3:
    print(str(num2)+" is minimum")
elif num3<num1 and num3<num2:    
    print(str(num3)+" is minimum")
    
