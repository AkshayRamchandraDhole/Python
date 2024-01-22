for i in range(1,5):
	for j in range(4,0,-1):
		if(i>=j):
			print(chr(j+64),end=' ')
			#x=x+1
		else:
			print(" ",end=' ')
	print()
