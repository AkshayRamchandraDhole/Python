def bintohex():
	list1=['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F']
	no=int(input("Enter Binary Number:-"))
	hexm=""
	while(no > 0):
		rem=no % 16
		hexm=list1[rem]+hexm
		no=no // 16
	print(hexm)
bintohex()
