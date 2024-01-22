def abunNo():
	n=int(input())
	sum=0
	for i in range(1,n):
		if(n % i == 0):
			sum=sum+i
	if(sum>n):
		print(n,"is abundant number")
	else:
		print(n,"is not abundant number")
abunNo()
