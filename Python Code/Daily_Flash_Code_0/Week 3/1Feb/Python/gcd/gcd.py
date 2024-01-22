def grediv():
	a=int(input('Enter the 1st number:-'))
	b=int(input('Enter the 2nd Number:-'))
	x=a
	y=b
	while(a % b != 0):
		rem=a % b
		a=b
		b=rem
	print("The GCD of",x,"&",y,"is:-",b)
grediv()
