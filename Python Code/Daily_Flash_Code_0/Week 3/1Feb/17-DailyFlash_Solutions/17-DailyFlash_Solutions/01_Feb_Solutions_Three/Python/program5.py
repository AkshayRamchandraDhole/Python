
def gcd(n1 : int, n2: int)-> int:
	
	if(n2 != 0):
		return gcd(n2, n1 % n2)
	else:
		return n1

try:
	n1 = int(input("Enter Number : "))
	n2 = int(input("Enter Number : "))
except ValueError as e:
	exit(0)
if(n1 < 0 or n2 < 0):
	exit(0)
	
print("The GCD of {} and {} is {}".format(n1,n2,gcd(n1, n2)))
