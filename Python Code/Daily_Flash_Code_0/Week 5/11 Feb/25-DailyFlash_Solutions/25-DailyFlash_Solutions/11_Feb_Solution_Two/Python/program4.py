try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)

for i in range(1,n+1):
	for j in range(n,0,-1):
		if(j > i):
			print(end = "\t")
		else:
			print(chr(j+64), end = "\t")
	print()
