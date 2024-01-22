x=int(input("Enter A First Number:-"))
y=int(input("Enter A Second Number:-"))
z=input("Enter the sign of operation:-")

if(z == '+'):
	print("Additon is:-",x + y)
elif(z == '-'):\
	print("Substraction is:-",x-y)
elif(z == '*'):
	print("Multiplication is:-",x*y)
elif(z == '//'):
	print("Division is:-",x // y)
elif(z == '%'):
	print("Modulus is:-", x % y)
else:
	print("No More Operation")
