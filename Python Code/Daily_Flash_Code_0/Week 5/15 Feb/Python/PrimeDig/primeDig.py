n=int(input("Enter Number:"))
while n > 0:
	c=0
	rem=n % 10
	for i in range(1,rem+1):
		if(rem % i==0):
			c+=1
	if(c==2):
		print(rem,end=' ')
	n=n//10
print()
