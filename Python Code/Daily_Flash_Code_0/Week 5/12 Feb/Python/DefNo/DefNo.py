def DNo():
	n=int(input("Enter Range:"))
	sum=0
	for i in range(1,n+1):
		for j in range(1,n//2+1):
			if(i % j == 0):
				sum=sum+j
		if(sum>i):
			print(i,end=' ')
		sum=0
DNo()
print()
