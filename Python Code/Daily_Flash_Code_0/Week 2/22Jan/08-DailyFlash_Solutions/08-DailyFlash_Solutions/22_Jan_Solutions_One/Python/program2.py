try:
	print("Enter Numbers : ")
	a = int(raw_input())
	b = int(raw_input())
except ValueError as e:
	print("Invalid")
	exit(0)
	pass

k = a * b;
	
if ((b==0 and b <= a) or (a == 0 and a <= b)):
		print("Denominator can't be Zeror\n")
		exit(0)
elif a>b:
		print("Multiplication : {}\nDivision : {}\n".format(k,a/b))
else:
		print("Multiplication : {}\nDivision : {}".format(k,b/a))
