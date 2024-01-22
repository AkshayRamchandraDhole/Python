import math as m
le=int(input("Enter length of series:"))
add=0
x,y=input("Enter Value of X and Y:").split()
x=int(x)
y=int(y)
for i in range(1,le+1):
    add+=i/(x+y)**i *m.factorial(i)
print("The Addition of entered series:",round(add,2))
