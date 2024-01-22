n=int(input("Enter Number:-"))
c=0
a=0
while(n>0):
	c=n % 10
	if(c % 2 == 0):
		a+=1
	n=n // 10
print(a)
