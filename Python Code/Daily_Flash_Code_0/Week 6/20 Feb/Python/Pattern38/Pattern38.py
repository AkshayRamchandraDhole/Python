def fun(n):
	str=0
	if(n==0):
		str=n+str
	else:
		while(n>0):
			str=n%2+str
			n=n/2
	return str
k=0
for i in range(1,5):
	x=k
	for j in range(1,5):
		if(j<i):
			print(" ",end=' ')
		else:
			print(fun(x),end=' ')
			x+=1
	print()
	k+=2
