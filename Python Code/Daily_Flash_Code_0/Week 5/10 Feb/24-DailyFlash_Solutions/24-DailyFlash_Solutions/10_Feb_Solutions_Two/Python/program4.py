try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)

for i in range(0,n):
	for j in range(0,n):
		if(j < (n-i-1)):
			print(end = "\t")
		elif j == n-i-1:
			print("3\t",end="")
		else:
			print(j*(j+i), end = "\t")
	print()
