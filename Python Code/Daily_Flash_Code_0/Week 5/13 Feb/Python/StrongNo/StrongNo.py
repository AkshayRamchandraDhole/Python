n=int(input("Enter Number:"))
d=n
sum=0
while n:
	i=1
	fact=1
	rem=n % 10
	while(i<=rem):
		fact=fact*i
		i+=1
	sum=sum+fact
	n=n // 10
if(sum==d):
	print(d,"is strong number:")
else:
	print(d,"is not strong number:")

