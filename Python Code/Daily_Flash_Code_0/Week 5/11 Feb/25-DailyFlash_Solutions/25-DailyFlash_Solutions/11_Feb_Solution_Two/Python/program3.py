
try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)
sum = 0
if(n%2==0):
	i = n
else:
	i = n-1
while i>=0:
	
	print(i, end = " ")
	i = i - 2
print()

