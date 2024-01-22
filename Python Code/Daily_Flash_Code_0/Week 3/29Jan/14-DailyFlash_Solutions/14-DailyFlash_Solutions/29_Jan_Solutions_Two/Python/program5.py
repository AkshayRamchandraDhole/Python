
try:
	print("Enter date : ")
	day = int(input())
	mn = int(input())
	yr = int(input())

except ValueError as e:
	exit(0)
	pass
print(day,"/" ,mn,"/",yr)
if(day <= 0 or mn <= 0 or yr <= 0 or day > 31 or mn > 12 ):
	print("Invalid date")
	exit(0)
	
elif((mn <= 7 and day <= 31 and mn % 2 != 0) or (mn >= 8 and day <= 31 and mn % 2 == 0)):
	print("Valid Date")
	
elif((mn != 2 and mn <= 7 and day <= 30 and mn % 2 == 0) or (mn >= 8 and day <= 30 and mn % 2 != 0)):
	print("Valid Date ")
	
	
elif(mn == 2 and yr % 100 == 0):
	if(yr % 400 == 0 and day <= 29):
		print("Valid Date")
		
	elif(day <= 28):
		print("Valid Date")
		
	else :
		print("Invalid Date")
		
	
elif(mn == 2 ):
	if(yr % 4 == 0 and day <= 29):
		print("Valid Date")
		
	elif(day <= 28):
		print("Valid Date")
		
	else :
		print("Invalid Date")
		
	
else :
	print("Invalid Date")
	


