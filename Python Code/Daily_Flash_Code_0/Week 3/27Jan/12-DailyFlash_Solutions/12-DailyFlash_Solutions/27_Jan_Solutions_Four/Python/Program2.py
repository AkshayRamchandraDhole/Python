'''
Problem Statement

Write a Program that accepts Two integers from user and prints minimum number from them
'''

num1 = int(input("Enter number1 value\n"))
num2 = int(input("Enter number2 value\n"))

if (num1 < num2) :
    print("The minimum number among ",num1," and ",num2," is ",num1)
else : 
    print("The minimum number among ",num1," and ",num2," is ",num2)
