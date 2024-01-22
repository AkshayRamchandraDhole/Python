x=0
for i in range(5):
	k=x
	for j in range(5):
		if(i<=j):
			print(((k*k)+i*j),end=' ')
			k+=1			
		else:
			print(" ",end=' ')
	
	print()
	x+=1
