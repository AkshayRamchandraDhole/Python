try:
	print("Enter Number")
	n2 = int(input())
except ValueError as e:
	exit(0)
	pass

if(n2 < 0):
	print("Enter Positive Number")
	exit(0)

for i in range(1, n2 + 1) :
	if(i % 2 == 0 ):
		print("Cube of {} : {} and Square of {} : {}".format(i, i*i*i, i, i*i))
