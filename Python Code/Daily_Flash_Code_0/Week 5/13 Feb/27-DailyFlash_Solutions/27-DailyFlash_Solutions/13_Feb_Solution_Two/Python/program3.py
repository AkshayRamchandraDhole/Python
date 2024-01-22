
try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)
	
sum = 0
if(n<0):
	exit(0)
while(n != 0):
	sum = sum + (n % 10)
	n = n // 10
print("Sum of digits : ",sum)
