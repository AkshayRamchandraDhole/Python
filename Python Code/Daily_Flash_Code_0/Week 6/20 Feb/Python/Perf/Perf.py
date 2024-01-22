n=int(input("Enter Number:"))
x=n
dig=0
while n > 0:
	dig=n%10
	if(x%dig==0):
		print(dig,"is perfect digit")
	else:
		print(dig,"is not perfect digit")
	n=n//10
