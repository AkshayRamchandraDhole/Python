import math as m
l=int(input("Enter Length of Series:"))
mul=0
for i in range(1,l+1):
    x=m.sqrt(i*i+1)
    mul+=i/x
print("The Addition of Series of Length",l,"=",round(mul,2))
