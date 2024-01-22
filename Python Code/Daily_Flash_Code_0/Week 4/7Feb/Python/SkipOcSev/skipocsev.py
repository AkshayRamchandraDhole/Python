def skiposev(x=10):
	for i in range(1,x+1):
		if(i % 7 == 0):
			continue
		else:
			print(i,end=' ')

skiposev(100)
print()

