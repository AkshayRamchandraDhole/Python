
n = 0
try:
	n = int(input("Enter Size : "))
	if(n < 0):
		print("Enter Positive Number")
		exit(0)
except ValueError as e:
	print("Enter valid Number")
	pass

flag = 'A'
for i in range(n, 0, -1) :
	if ord(flag) == ord('A'):
		flag = 'a'
	else:
		flag = 'A'
	for j in range(1, n-i+2):
		print(flag, end = " ")
	print()