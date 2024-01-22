try:
	print("Enter Numbers : ")
	a = int(raw_input())
	b = int(raw_input())
except ValueError as e:
	print("Invalid")
	exit(0)
	pass	
	
print("Addition : {}\nSubtraction : {}\n".format(a * a * a + b * b * b , a * a - b * b))
