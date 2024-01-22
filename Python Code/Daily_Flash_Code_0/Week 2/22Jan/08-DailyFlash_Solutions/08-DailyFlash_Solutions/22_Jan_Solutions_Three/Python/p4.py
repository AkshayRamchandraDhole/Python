'''
Program 4: Write a Program to simulate simple calculator. Accept two integers
from user and sign of operation to perform.
Input:
Enter First Number: 10
Enter Second Number: 20
Enter the sign of Operation: +
Output: Addition of 10 & 20 is 30.
'''

var1=int(input("enter first integer "))
var2=int(input("enter second integer "))
sign=input("enter sign of operation")

if(sign == "+"):
	add = var1+var2
	print("addition is",add)

elif(sign == "-"):
	sub = var1-var2
	print("subtraction is",sub)

elif(sign == "*"):
	mul =var1*var2
	print("multiplication is",mul)

elif(sign == "/"):
	div= var1/var2
	print("division is",div)

else:
	print("invalid input")
