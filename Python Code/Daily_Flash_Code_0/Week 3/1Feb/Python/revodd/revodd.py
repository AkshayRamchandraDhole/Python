def revodd(x):
	for i in range(x,0,-1):
		if(i % 2 != 0):
			print(i,end=' ')
print("Enter A Number:-")
num=int(input())
revodd(num)
print()
