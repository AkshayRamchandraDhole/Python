n = int(input("Enter size of diamond\n"))

for i in range(1, 2 * n) :

	for j in range(1, 2 * n) :

		if(i == n or j == n or i + j == n + 1 or i + j == 3 * n - 1 or abs(i - j) == n - 1) :
			print("+", end = " ")

		else :
			print(" ", end = " ")

	print()
