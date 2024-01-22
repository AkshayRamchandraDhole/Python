n=int(input("Enter Number:"))
sum=0
avg=0
c=0
while n > 0:
	rem=n % 10
	sum+=rem
	c+=1
	n=n//10
print("Sum is:",sum)
print("Avg is:",int(sum/c))
