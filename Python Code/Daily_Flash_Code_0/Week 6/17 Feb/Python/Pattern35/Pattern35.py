for i in range(5):
	x=5
	for j in range(5):
		if(i>j):
			print(" ",end=' ')
		else:
			print(x,end=' ')
		x-=1
	print()
