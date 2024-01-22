import math as m
r=int(input("how many ways to distribute medals:"))
n=int(input("Enter total employee:"))
a=n-r
c=m.factorial(n)/m.factorial(a)
print("There are",c,"wyas to distribute",r,"medals amongst",n,"employee")
