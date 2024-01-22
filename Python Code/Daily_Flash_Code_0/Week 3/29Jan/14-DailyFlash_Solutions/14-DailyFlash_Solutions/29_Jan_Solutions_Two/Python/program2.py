try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)


print("Second Successor : ", n + 2 , "\nSecond Predecessor : ", n - 2)