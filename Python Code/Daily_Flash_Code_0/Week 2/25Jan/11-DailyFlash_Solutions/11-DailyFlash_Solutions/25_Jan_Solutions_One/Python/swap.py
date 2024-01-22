"""/*
Program 2: Write a Program which accepts two integers from user and swaps
their insertion order.
Input : 20 30
Output :
Before Swap : 20 30
After Swap : 30 20
*/
"""

num1 = input("Enter the number1 : ")
num2 = input("Enter the number2 : ")

print("Before Swap num1 = "+str(num1)+" and num2 = "+str(num2))

num1 = num1+num2;
num2 = num1 - num2;
num1 = num1 - num2;

print("Before Swap num1 = "+str(num1)+" and num2 = "+str(num2))

