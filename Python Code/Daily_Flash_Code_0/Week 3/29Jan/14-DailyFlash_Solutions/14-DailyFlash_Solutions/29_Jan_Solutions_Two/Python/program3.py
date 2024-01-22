try:
	l = int(input("Enter length : "))
	b = int(input("Enter breadth : "))
except ValueError as e:
	exit(0)	
	
if(l < 0 or b < 0 or l < b):
	exit(0);

print("Area Of Rectangle = ",l * b, "sq unit")
