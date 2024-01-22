	
try:
	n = int(input("Enter Number : "))
except ValueError as e:
	print("Not a Number");
	exit(0)
sum = 0
temp = n
while(n!=0):
	fact = 1
	for i in range(1, (n%10) + 1):
		fact = fact * i		
	sum = sum + fact
	n = n // 10
	
if(sum == temp):
	print("Number is Strong Number")
	
else:
	print("Number is not Strong Number")
	

