for i in range(1,5):
	for j in range(4,0,-1):
		if(j==i):
			print("=",end=' ')
		elif(i>=j):
			print("*",end=' ')
		else:
			print(" ",end=' ')
	print()
