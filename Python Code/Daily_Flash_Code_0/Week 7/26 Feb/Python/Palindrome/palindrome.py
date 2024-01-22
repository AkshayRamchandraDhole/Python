def pal(n):
	tmp=n
	rev=0
	while n > 0:
		rem=n%10
		rev=rev*10+rem
		n//=10
	if(tmp==rev):
		print(tmp,end=' ')



for i in range(300,600):
	pal(i)
print()		
