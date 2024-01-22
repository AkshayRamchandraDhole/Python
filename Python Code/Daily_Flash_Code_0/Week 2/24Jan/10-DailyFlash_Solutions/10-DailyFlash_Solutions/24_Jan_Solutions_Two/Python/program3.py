
try:
	n = int(raw_input("Enter Numebr : "))
except ValueError as e:
	print("Enter valid Number")
	pass

if(n < 0):
	print("Enter Positive Number")
	exit(0)
	
for i in range(1, n + 1) :
	if(i % 2 != 0 ):
		print("Cube of {} : {} and Square of {} : {}".format(i, i*i*i, i, i*i))
	

