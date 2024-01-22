def bintoct(b):
	oct,dec,i=0,0,0
	while(b!=0):
		dec=dec+(b % 10) * pow(2,i)
		i=i+1
		b=b // 10
	i=1
	while(dec!=0):
		oct=oct+(dec % 8)*i
		dec=dec // 8
		i=i*10
	print(oct)
n=int(input("Enter Binary Number:-"))
bintoct(n)
		
