n = int(input("Enter Number : "))
m = int(input("Enter Digit from number to replace :"))
max = int(input("Enter Digit to replace :  "))
rev = 0
while(n != 0):
	rev = rev * 10 + n % 10
	n //= 10
	
while(rev != 0):
	if(rev % 10 == m):
		n = n * 10 + max
	else:
		n = n * 10 + rev % 10
	rev //= 10
print(n)

