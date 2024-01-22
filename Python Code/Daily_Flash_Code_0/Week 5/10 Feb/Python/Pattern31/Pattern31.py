for i in range(1,5):
	for j in range(1,5):
		
		if(j<5-i):
			print(" ",end=' ')
		elif(i+j==5):
			print("3",end=' ')		
		elif(i+j==6):
			print(4*(j-1),end=' ')
		elif(i+j==7):
			print(5*(j-1),end=' ')
		else:
			print(6*(j-1),end=' ')
	print()
