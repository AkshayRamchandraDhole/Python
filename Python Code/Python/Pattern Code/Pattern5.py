x=1

for i in range(6):
	for j in range(i):
		if(i % 2 == 0):	
			print("*",end=' ')
			
		else:
			print(i,end=' ')
	print()