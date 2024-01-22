try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)
if(n < 0):
	exit(0)
for i in range(n, -1, -1):
	if(i %2 != 1):
		print(i, end = " ")
print()
