n = int(input("Enter size\n"))

d = 2 * n

for i in range(1, d) :

	for j in range(1, d) :

		if(i <= n and i + j == n + 1 or j - i == n - 1) :
			print(chr(64 + i), end = " ")

		elif(i > n and i - j == n - 1 or i + j == 3 * n - 1) :
			print(chr(65 + d - 1 - i), end = " ")

		else :
			print(" ", end = " ")

	print()
