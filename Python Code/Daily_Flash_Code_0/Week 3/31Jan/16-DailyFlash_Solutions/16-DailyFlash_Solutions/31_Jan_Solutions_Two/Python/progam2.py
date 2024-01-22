try:
	n = int(input("Enter Number "))
except ValueError as e:
	exit(0)	
if(n <= 0):
	exit(0)	

print("Dollars :", n * 0.014)
