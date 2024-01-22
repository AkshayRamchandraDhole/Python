n = int(input("Enter number of rows\n"))

for i in range(1, n + 1) :

	val = i - 1

	for j in range(1, 2 * n) :

		if(j <= n and i + j >= n + 1) :
			val += 1
			print(val, end = " ")

		elif(j > n and j - i <= n - 1) :
			val -= 1
			print(val, end = " ")

		else :
			print(" ", end = " ")

	print()
