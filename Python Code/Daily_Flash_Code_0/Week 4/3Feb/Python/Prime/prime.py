def isprime(x):
	count=0
	for i in range(1,x+1):
		if(x % i == 0):
			count=count+1
	if(count==2):
		print(x,"is prime")
	else:
		print(x,"is not prime")
no=int(input("Enter Number:-"))
isprime(no)
