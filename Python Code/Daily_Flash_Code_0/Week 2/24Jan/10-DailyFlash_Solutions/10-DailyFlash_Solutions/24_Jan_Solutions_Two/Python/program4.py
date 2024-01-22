
n = 0
try:
	n = int(input("Enter Size : "))
	if(n < 0):
		print("Enter Positive Number")
		exit(0)
except ValueError as e:
	print("Enter valid Number")
	pass

flag = 1
for i in range(n, 0, -1) :
	if flag == 1:
		flag = 0
	else:
		flag = 1
	for j in range(1, n-i+2):
		print(flag, end = " ")
	print()
