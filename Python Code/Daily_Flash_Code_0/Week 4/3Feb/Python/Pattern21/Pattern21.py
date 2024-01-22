for i in range(4):
	for j in range(4,i,-1):
		if(j==4):
			print(chr(i+65),end=' ')
		else:	
			i=i+2	
			print(chr(i+65),end=' ')
			
			
	print()
