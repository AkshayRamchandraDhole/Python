x=65
for i in range(1,5):
	y=x
	k=3
	for j in range(1,5):
		if(j<5-i):
			print(" ",end=' ')
		else:
			print(chr(y),k,end=' ')
			y-=1
			k+=1
	print()
	x=x+1
