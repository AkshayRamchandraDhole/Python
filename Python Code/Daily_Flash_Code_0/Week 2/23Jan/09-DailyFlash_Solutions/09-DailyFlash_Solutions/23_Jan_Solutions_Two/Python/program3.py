
try:
	a = int(input("Enter Size : "))
except ValueError as e:
	print("Invalid")
	exit(0)
	pass

k = 1
for i in range(1, a + 1):
	for j in range(1, i + 1):
		print(k, end = ' ')
		k+=1
	print()
