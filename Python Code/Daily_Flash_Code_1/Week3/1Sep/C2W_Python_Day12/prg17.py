n = int(input("Enter size\n"))

for i in range(1, 2 * n) :

	for j in range(1, 4 * n - 1) :

		if(i == n or i <= n and (j - i == n - 1 or i + j == 3 * n) or i > n and (i + j == 3 * n - 1 or j - i == n)) :
			print("*", end = " ")

		else :
			print(" ", end = " ")

	print()
