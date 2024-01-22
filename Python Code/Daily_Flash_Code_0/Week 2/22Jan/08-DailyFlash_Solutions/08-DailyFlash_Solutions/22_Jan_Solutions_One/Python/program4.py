try:
	print("Enter Numbers : ")
	a = int(raw_input())
	b = int(raw_input())
	print("Enter Operation :")
	op = ord(raw_input())
except ValueError as e:
	print("Invalid")
	exit(0)
	pass	
except TypeError :
	print("Invalid")
	exit(0)
	pass

if(op == ord("+")):
	print("Addition : {}".format(a + b))
elif(op == ord("*")):
  	print("Multiplication : {}".format(a * b))	
elif(op == ord("-")):
   	print("Subtraction : {}".format(a - b))
elif(op == ord("/")):
	if(b == 0):
		exit(0)
	print("Division : {}".format(a/b))	

else:
	print("Invalid choice")
		
