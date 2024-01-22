n=int(input("Enter NUmber:"))
a=n
while n > 0:
	rem=n%10
	tmp=rem
	if(a % tmp == 0):
		print(tmp,end=' ')
	n=n//10
print()

