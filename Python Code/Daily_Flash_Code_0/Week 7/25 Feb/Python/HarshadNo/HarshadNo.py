def digco(a,n):
	for i in range(a,n):
		no(i)
def no(i):
	su=0
	x=i
	while i > 0:
		rem=i%10
		su+=rem
		i//=10
	d=x%su
	if(d==0):
		print(x,end=' ')
a=int(input("Enter lower Bound:"))
n=int(input("Enter Upper Bound:"))
digco(a,n)
print()


