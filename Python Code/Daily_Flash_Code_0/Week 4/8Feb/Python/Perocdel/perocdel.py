def perocdele(n):
	sum=1
	i=2
	while(i * i <=n ):
		if(n % i == 0):
			sum=sum+i+n/i
		i=i+1
		
	return (True if sum==n and n!=1 else False)				

for i in range(1,101):
	if(perocdele(i)):
		continue
	else:
		print(i,end=' ')
print()
