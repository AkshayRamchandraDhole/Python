print("Enter All Marks out of 100")
p=int(input("Enter A Physics Marks:-"))
c=int(input("Enter A Chemistry Marks:-"))
b=int(input("Enter A Biology Marks:-"))
m=int(input("Enter A Mathematics Marks:-"))
c=int(input("Enter A Computer Marks:-"))

pe=p+c+b+m+c
per=pe/5
print("Percentage is:{}".format(per))

if(per >= 90):
	print("Grade A")
elif(per >= 80):
	print("Grade B")
elif(per >= 70):
	print("Grade C")
elif(per >= 60):
	print("Grade D")
elif(per >= 40):
	print("Grade E")
else:
	print("Grade F")
