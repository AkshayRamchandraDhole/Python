
try:
	n = int(raw_input("Enter Number : "))
except ValueError as e:
	print("Invalid Number")
	pass

if(n < 0):
	exit(0)

fact = 1
for i in range(1, n+1):
	fact = fact * i

print("Factorial is {}".format(fact))