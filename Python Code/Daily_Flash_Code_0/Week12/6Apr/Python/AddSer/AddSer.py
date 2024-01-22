import math as m
le=int(input("Enter length of series:"))
x,y=input("Enter X and Y:").split()
x=int(x)
y=int(y)
add=0
for i in range(1,le+1):
    add+=(x+y)**i*m.factorial(i)
print("The Addition of entered series:",add)

