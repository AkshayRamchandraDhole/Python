def sumofser():
	sum=0
	j=9
	no=int(input("Nth Element in series:-"))
	for i in range(1,no+1):
		sum=sum+j
		j=(j*10)+9
	print(sum)
sumofser()
