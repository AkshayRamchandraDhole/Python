def pal(n):
	tmp=n
	rev=0
	while n > 0:
		rem=n%10
		rev=rev*10+rem
		n//=10
	if(tmp==rev):
		print(tmp,end=' ')


n1=int(input("Enter Lower Bound:"))
n2=int(input("Enter Upper Bound:"))
for i in range(n1,n2):
	pal(i)
print()	