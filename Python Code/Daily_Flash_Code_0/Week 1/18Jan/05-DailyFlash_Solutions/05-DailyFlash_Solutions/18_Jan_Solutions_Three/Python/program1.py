
''' Run this program with python3'''
try:
    a =  int(input("Enter Size : "))
except ValueError:
    print('Not a Number')
    exit(0)


if a < 0:
	print("Not allowed");
else :
	for i in range(1 , a * a + 1):
		if i % a == 0 :
			print(0)
		else:
			print(0, end="\t")
