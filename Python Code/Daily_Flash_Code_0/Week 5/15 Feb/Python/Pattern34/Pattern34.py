x=10
for i in range(1,5):
	for j in range(4,0,-1):
		if(i>=j):
			print(x*x,end=' ')
			x=x-1
		else:
			print(" ",end=' ')
	print()

