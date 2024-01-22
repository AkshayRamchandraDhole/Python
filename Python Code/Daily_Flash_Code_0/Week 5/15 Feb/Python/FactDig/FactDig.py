n=int(input("Enter Number:"))
while n > 0 :
	rem=n % 10 
	fact=1
	for i in range(1,rem+1):
		fact=fact*i
	print(fact,end=' ')
	n=n//10
print()

