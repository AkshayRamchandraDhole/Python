age=int(input("Enter A Age Of Employee:-"))
sex=input("Enter A Sex(M or F) of Employee:-")
ms=input("Enter A Martial Status (Y or N) of Employee:-")

if(sex == 'F'):
	print("You will Work in Urban Areas")
if(sex == 'M'):
	if(age >= 20 and age<=40):
		print("You Will Work Anywhere")
	elif(age >= 40 and age < 60):
		print("You Will Work Only in Urban Areas")
	else:
		print("ERROR")

