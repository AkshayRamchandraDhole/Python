no=int(input("Enter A Number:-"))
for i in range(1,no):
	if(no % i == 0):
		print("Perfect Divisor of",no,"are:-",i)
