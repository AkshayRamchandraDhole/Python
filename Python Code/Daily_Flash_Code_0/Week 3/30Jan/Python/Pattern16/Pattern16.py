x=7
for i in range(5):
	for j in range(i):
		if(j==0):
			print(x,end=' ')
		if(j>=1):
			print(x-1,end=" ")
			x=x-1
			
	print()
