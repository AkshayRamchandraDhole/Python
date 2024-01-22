'''
Problem Statement

Write a Program that accepts Three integers from user and prints maximum number from them
'''

num1 = int(input("Enter number1 value\n"))
num2 = int(input("Enter number2 value\n"))
num3 = int(input("Enter number3 value\n"))

if (num1 > num2 and num1 > num3) :
    print("The maximum number among ",num1,", ",num2," and ",num3," is ",num1)
elif (num1 > num2 and num1 > num3) :
    print("The maximum number among ",num1,", ",num2," and ",num3," is ",num2)
else :
    print("The maximum number among ",num1,", ",num2," and ",num3," is ",num3)
