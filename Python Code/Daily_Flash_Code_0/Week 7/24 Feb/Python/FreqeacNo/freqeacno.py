n=int(input("Enter Number:"))
list1=list()
tmp=n
c=0
a=0
while n > 0:
	rem=n%10
	list1.append(rem)
	c+=1
	n//=10
for i in range(c):
	while tmp > 0:
		rem=tmp%10
		if(rem==list1[i]):
			a+=1
		print("Count of",rem,"is",a)
		tmp//=10
	
