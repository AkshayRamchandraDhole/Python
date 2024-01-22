import math
n=int(input("Enter Number:"))
for i in range(1,n+1):
	d=i
	sum=0
	while d > 0 :
		rem=d % 10
		fact=math.factorial(rem)
		sum=sum+fact
		d=d // 10
	if(sum==i):
		print(i,"is strong number")



