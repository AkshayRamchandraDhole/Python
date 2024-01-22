for i in range(1,5):
	x=1
	for j in range(1,5):
		if(j<5-i):
			print(" ",end=' ')
		elif(j+i==5):
			print("=",end=' ')
		elif(i!=4):
			print(x,end=' ')
			x=x+1
		elif(i==j):
			print("8",end=' ')
		else:
			print(j+1,end=' ')
		
	print()
