def reveven():
	print("Enter a Number:-")
	num=int(input())
	for i in range(num,0,-1):
		if(i % 2 == 0):
			print(i,end=' ')
reveven()
print()	
