for i in range(5):
	x=65
	for j in range(4,0,-1):
		if(i >= j):
			print(chr(x),end=' ')
			x=x+1
		else:
			print(" ",end=' ')
	print()
