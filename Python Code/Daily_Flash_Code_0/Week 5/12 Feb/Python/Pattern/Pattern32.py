for i in range(1,5):
	x=3
	for j in range(4,0,-1):
		if(j==i):
			print(x*x,end=' ')
		elif(i>=j):
			x=x+1
			print(x*x,end=' ')
			
		else:
			print(" ",end=' ')
	print()
