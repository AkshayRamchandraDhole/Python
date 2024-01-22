n=int(input("Enter Number:"))
x=n
dig=0
while n > 0:
	dig=n%10
	print(x,"/",dig,"=",x//dig)
	n=n//10
