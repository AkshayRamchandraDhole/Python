n=int(input("Enter NUmber:"))
tmp=n
while n > 0:
	rem=n%10
	print("Tha Octal of",rem,":",oct(rem))
	n=n//10
