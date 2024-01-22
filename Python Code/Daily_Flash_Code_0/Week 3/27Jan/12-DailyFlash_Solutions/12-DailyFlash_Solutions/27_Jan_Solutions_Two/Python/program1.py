
try:
	print("Enter Numbers")
	n1 = int(input())
	n2 = int(input())
except ValueError as e:
	exit(0)
	pass

if(n1 < 0 or n2 < 0 or n1 > n2):
	print("Enter Positive Numbers or second Number should greater than first Number")
	exit(0)
	
for i in range(n1, n2 + 1) :
	if(i % 2 == 0 ):
		print(i , end = " ")
	
print()

