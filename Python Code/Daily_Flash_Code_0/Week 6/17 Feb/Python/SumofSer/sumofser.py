n=int(input("Enter Number:"))
for i in range(n):
	a=int(input('Enter Series:'))
	sum=0
	while a > 0 :
		rem=a % 10
		sum+=a
		a=a // 10
print(sum,end=' ')
print()	
