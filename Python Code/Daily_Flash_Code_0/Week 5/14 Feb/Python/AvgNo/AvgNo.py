n=int(input("Enter Number:"))
sum=0
rem=0
c=0
while n > 0 :
	rem=n % 10
	sum=sum+rem
	c+=1
	n = n // 10
print("Average is:-",sum // c)
