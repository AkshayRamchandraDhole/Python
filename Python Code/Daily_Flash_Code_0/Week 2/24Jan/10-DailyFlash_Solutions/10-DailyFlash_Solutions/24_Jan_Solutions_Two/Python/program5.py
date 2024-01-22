
n = 0
try:
	n = int(input("Enter Size : "))
	if(n < 0):
		print("Enter Positive Number")
		exit(0)
except ValueError as e:
	print("Enter valid Number")
	pass
	
print("perfect Divisors of {} are : ".format(n))
flag = 0
for i in range(2, n//2 + 1) :
	if(n % i == 0 ) : 
		flag = 1
		print(i, end = " ")

if(flag == 0):
	print("Prime Number", end = "")
print()

