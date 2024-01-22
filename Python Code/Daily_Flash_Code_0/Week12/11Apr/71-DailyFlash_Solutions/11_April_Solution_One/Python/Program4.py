a = int(input("Enter Value of a\n"))
b = int(input("Enter Value of b\n"))
c = int(input("Enter Value of c\n"))


x = (-b + (b**2 - 4*a*c)**0.5) / (2*a)
y = (-b - (b**2 - 4*a*c)**0.5) / (2*a)	

print("X = ",x)
print("Y = ",y)
