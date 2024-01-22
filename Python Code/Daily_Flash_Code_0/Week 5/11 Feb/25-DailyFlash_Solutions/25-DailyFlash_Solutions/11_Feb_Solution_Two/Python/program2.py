
try:
	n = int(input("Enter Octal Number : "))
except ValueError as e:
	print("Not a Number")
	exit(0)
sum = 0
c = 0
while(n!=0):
	if(n%10>=8):
		print("Not a Octal Number")
		exit(0)
		
	sum = sum + int(pow(8,c)) * (n%10)
	c+=1
	n = n//10
		
print("Decimal Number : ", sum)

