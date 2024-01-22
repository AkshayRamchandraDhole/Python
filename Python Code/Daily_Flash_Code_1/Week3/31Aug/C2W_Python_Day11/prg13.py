n = int(input("Enter size\n"))

for i in range(1, 2 * n) :
	
	val = 1 if i <= n else i - n + 1

	for j in range(1, n + 1) :

		if(i <= n and i + j >= n + 1) :
			print(val, end = "   ")
			val += 1

		elif(i > n and i - j <= n - 1) :
			print(val, end = "   ")
			val += 1

		else :
			print(end = "  ")

	print()
