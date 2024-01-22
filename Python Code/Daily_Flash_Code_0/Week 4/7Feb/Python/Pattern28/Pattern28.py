
for i in range(1,5):
	x=64	
	for j in range(4,0,-1):
		x=x+1
		if(i>=j):
			print(chr(x),end=' ')
		else:
			print(" ",end=' ')

	print()


