def abu():
	a=int(input("Enter NUmber:-"))
	sum=0
	for i in range(1,a+1):
		for j in range(1,int(i)):
			if(i % j == 0):
				sum=sum+j
		if(sum>=i):
			print(i,end=' ')
		sum=0
abu()
print()	
