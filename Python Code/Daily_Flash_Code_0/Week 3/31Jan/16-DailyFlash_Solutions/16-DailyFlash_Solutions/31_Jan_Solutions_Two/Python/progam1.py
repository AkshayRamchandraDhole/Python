try:
	n = int(input("Enter Number "))
except ValueError as e:
	exit(0)	
if(n <= 0):
	exit(0)

for i in range(1,n*n+1,n):
	print(i, end = ' ')
	
print()

