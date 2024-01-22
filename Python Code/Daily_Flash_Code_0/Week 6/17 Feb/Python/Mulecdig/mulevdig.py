n=int(input("Enter Number:"))
rem=1
a=1
while n > 0:
	rem=n % 10
	if(rem % 2 == 0):
		r=rem*a
		a=r		
	n=n//10
print(r)
