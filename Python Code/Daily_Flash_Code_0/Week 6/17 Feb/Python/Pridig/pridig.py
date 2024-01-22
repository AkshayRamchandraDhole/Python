n=int(input("Enter Nummber:"))
while n > 0:
	rem=n % 10
	c=0
	a=rem
	for i in range(1,a+1):
		if(rem % i == 0):
			c+=1
	if(c==2):
		print(a,end='')
	n=n//10
print()
