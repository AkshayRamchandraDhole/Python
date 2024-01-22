unit=int(input("Enter A Unit of Elevtricity:-"))
if(unit <= 50):
	unit=unit*0.50
	print("For First 50 Unit Charge is:-{0}".format(unit))
elif(unit <=150):
	unit=unit*0.75
	print("For next 100 Unit Charge is:-{0}".format(unit))
elif(unit <= 250):
	unit=unit*1.20
	print("For next 100 Unit Charge is:-{0}".format(unit))
elif(unit >= 250):
	unit=unit*1.50
	print("For Unit Above 250 Charge is:-{0}".format(unit))
else:
	print("No Charge")
