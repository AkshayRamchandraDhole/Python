"""
/*
 Program 5: Write a Program that accepts Two integers from user and prints
maximum number from them.
Input: 56 99
Output: The Maximum number amongst 56 & 99 is 99

*/
"""


num1 = input("Enter the number1 : ")
num2 = input("Enter the number2 : ")

print("The Maximum number amongst "+str(num1)+" and "+str(num2)+" is "+str(num1 if num1>num2 else num2))
