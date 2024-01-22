'''
Problem Statement

Write a Program to Swap two entered number without using a third temporary variable.
'''

num1 = int(input("Enter a number1 \n"))
num2 = int(input("Enter a number2 \n"))

print("Before Swap num1 = ",num1," and num2 = ",num2)
num1,num2 = num2,num1
print("After Swap num1 = ",num1," and num2 = ",num2)
