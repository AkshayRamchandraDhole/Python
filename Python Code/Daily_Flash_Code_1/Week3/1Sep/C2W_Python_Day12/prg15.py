n = int(input("Enter width and length of butterfly wing\n"))

q = n / 2

for i in range(1, n + 1) :

	for j in range(1, n + 1) :

		if(i <= q and j > i and i + j < n + 1 or i > q and i + j > n + 1 and j < i) :
			print(" ", end = " ")

		else :
			print("*", end = " ")

	print()

