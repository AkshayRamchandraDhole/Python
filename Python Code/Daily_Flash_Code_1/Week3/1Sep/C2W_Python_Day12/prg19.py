n = int(input("Enter number of columns\n"))

for i in range(1, 2 * n) :

	for j in range(1, n + 1) :

		if(i <= n and j >= i or i > n and i + j >= n * 2) :
			print(j, end = " ")

		else :
			print(end = " ")
	print()
