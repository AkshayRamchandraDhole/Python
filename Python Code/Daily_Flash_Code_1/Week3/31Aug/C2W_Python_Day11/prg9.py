n = int(input("Enter number of rows\n"))

for i in range(1, n + 1) :

	val = 1

	for j in range(1, 2 * n) :

		if(i == n and j % 2 == 1) :
			print(val, end = " ")
			val += 1

		elif(i + j == n + 1 or j - i == n - 1) :
			print(val, end = " ")
			val += i - 1

		else :
			print(" ", end = " ")

	print()
