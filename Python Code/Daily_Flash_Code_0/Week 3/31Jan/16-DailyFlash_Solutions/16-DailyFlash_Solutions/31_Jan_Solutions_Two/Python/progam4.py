try:
	n = int(input("Enter Size "))
except ValueError as e:
	exit(0)	
if(n <= 0):
	exit(0)

k = n * 2 - 1
for i in range(1,n+1):
	for j in range(1,i + 1):
		print(k, end = "\t")
		k = k - 1

	k = n * 2 - 1 - i
	print()
