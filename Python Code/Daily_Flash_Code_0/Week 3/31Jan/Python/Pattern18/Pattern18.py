x=7
for i in range(5):
	for j in range(i):
		if(j==0):
			print(x,end=' ')
			x=x-1
		
		elif(j==2):
			print(x-1,end=' ')
		elif(j==3):
			print(x-2,end=' ')
		else:
			print(x,end=' ')
			
				
			
	print()
