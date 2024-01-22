ac=(int(input("Enter Hypotenuse Side of Triangle:-")))
ab=(int(input("Enter 1st Side of Triangle:-")))
bc=(int(input("Enter 2nd Side of Triangle:-")))
a=ac*ac

z=ab*ab+bc*bc

if(a==z):
	print("Triangle Satisfies the Pythagorem Theorem")
else:
	print("Triangle not Satisfies the Pythagorem Theorem")

