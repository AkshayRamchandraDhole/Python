x,y,z=input("Enter a Number:-").split()

if((x >= y) and (x >= z)):
	print("{0} is Highest Among Three Number".format(x))
elif((y >= x) and (y >= z)):
	print("{0} is Highest Among Three Number".format(y))
else:
	print("{0} is Highest Among Three Number".format(z))
