def bintodec():
	n=input("Enter Binary number:-")
	n=int(n)
	d,i=0,0
	while(n != 0):
		dec=n % 10
		d=d+dec*pow(2,i)
		n=n // 10
		i+=1
	print(d)
bintodec()
