
try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)
if(n < 0):
	exit(0)

for i in range(1, n+1):
	for j in range(n-i+2):
		if(j % 2 != 1):
			print("+", end = " ")
		else:
			print("=", end = " ")
	print()
