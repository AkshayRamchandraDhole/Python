max=int(input())

for z in range(1,max-1):
	sum=0
	for i in range(1,z-1):
		if(z % i == 0):
			sum=sum+i
	if(sum==z):
		print(z,"is Perfect Number")
		


