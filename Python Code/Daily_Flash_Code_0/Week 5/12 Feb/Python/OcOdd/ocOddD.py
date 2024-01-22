n=int(input("Enter Number:"))
r=1
a=0
while n > 0:
	r=n % 10
	if(r % 2 != 0):
		a+=1
	n=n // 10
print(a)
