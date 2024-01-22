n=int(input("Enter NUmber:"))
sum=0
rem=0
c=0
while n > 0 :
	rem=n % 10
	if(rem==1):
		c+=1
	n=n // 10
print("Count of 1s is:",c)
