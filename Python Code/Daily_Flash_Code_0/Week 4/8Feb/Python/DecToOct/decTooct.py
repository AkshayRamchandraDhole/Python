def dectooc(x):
	str1=" "
	rem=0
	oct1=['0','1','2','3','4','5','6','7']
	while(x > 0):
		rem=x % 8
		str1=oct1[rem]+str1
		x=x // 8
	print(str1)
n=int(input("Enter Decimal Number:"))
dectooc(n)
