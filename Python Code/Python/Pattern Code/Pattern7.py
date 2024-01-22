x='A'
for i in range(5):
	for j in range(i):
		print(x,end=' ')
		x=chr(ord(x)+2)
	print()
