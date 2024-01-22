try:
	n = int(input("Enter Limit "))
except ValueError as e:
	exit(0)	
if(n <= 0):
	exit(0)

for i in range(1, n + 1):
	sum = 0
	for j in range(1, i//2 + 1):
			
		if(i % j == 0):
			sum = sum + j
	if(sum == i):
		print(i, end =  ' ')

print()
