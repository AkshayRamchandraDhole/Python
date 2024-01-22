list1=['C','O','R','E']
for i in range(4):
	for j in range(4):
		if(i<=j):
			print(list1[j],end=' ')
		else:
			print(" ",end=' ')
	print()
