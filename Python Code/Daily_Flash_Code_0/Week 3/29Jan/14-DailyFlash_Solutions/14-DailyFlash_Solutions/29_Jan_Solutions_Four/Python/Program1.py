'''
Problem Statement

Write a Program to print table in reverse order.
'''

num = int(input("Enter a number to print table of \n"))
order = int(input("Enter Order\n1. Normal\n2. Reverse \n"))

for x,y in zip(range(1,11),range(10,0,-1)):
    if order == 2 :
        print(num," X ",y," : ",(num*y))
    else: 
        print(num," X ",x," : ",(num*x))
