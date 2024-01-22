'''
Program 3: Write a program that accepts two integers from user and prints
addition of their Cubes and subtraction of their Squares.
Input: 10 20
Output:
Addition of 1000 & 8000 is 9000
Subtraction of 100 & 400 is -300
'''

var1=int(input("enter first integer "))
var2=int(input("enter second integer "))


add=(var1*var1*var1)+(var2*var2*var2)
print("Addition of",var1*var1*var1,"&",var2*var2*var2,"is",add)

sub=(var1*var1)-(var2*var2)
print("Subtraction of",var1*var1,"&",var2*var2,"is",sub)
