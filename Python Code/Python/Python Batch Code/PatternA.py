for i in range(65,116):
	if(i==65):
		print(chr(i))
	i=i+2
	for j in range(65,i+1):
		#j=j+2
		print(chr(i),end=' ')
		j=j+2			
	print()
