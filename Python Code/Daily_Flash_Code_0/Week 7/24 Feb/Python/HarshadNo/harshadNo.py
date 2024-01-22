def digco():
	for i in range(1,101):
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
digco()
print()

