def octToDec(n):
	no=n
	dec=0
	b=1
	temp=no
	while(temp):
		rem=temp % 10
		temp=int(temp/10)
		dec+=rem*b
		b=b*8
	print("Decimal Number:-",dec)


n1=int(input("Enter Octal Number:-"))
octToDec(n1)

