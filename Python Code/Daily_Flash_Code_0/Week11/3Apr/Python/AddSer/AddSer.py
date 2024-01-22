import math as m
le=int(input("Enter Length of Series:"))
x,y=input("Enter X And Y:").split()
x=int(x)
y=int(y)
add=0
for i in range(1,le+1):
    add+=1/(((x+y)**i)*m.factorial(i))
print("The Addition of entered Series:",round(add,2))
