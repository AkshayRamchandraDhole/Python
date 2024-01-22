'''
Program 1: Write a program that accepts two integers from user and prints
addition & Subtraction of them.
{Note: checks for greater number to subtracts with while subtracting numbers}
Input: 10 20
Output:
Addition is 20
Subtraction is 10
'''






var1=int(input("enter first integer "))
var2=int(input("enter second integer "))

add=var1+var2
print("Addition is ",add)

if(var1 > var2):
	sub=var1-var2
	print("Subtraction is ",sub)
elif(var2>var1):
	sub=var2-var1
	print("Subtraction is ",sub)
