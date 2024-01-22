x=69
y=97
for i in range(1,5):
	for j in range(1,5):
		if(j<i):	
			print(" ",end=' ')
		else:	
			if(j%2==0):	
				print(chr(y),end=" ")
				y+=1
			else:
				print(chr(x),end=" ")
				x-=1
	print()
