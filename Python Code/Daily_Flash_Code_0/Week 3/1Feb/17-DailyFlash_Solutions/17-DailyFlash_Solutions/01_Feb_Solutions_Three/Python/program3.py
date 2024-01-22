try:
	n = int(input("Enter Hrs: "))
except ValueError as e:
	exit(0)
if(n < 0):
	exit(0)
print(n * 60 * 60,"seconds")
