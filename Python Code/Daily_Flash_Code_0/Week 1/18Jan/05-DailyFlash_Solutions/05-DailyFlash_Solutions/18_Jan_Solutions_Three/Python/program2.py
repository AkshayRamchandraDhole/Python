n = 0
try:
	n = int(raw_input("Total Natural Numbers : "))

except ValueError as e:
	print("Not a Number")
	exit(0)

print("Sum : {}".format(n*(n+1)/2))