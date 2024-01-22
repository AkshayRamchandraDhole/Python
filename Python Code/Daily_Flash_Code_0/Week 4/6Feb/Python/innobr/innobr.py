def takein(n):
	for i in range(n+1):
		a=int(input("Enter A Number:-"))	
		if(a <= 0):
			print("Negative Number Enter!!!!!!! Exit loop")
			break
		else:
			print(a,end=' ')
z=int(input("Enter Number:-"))
takein(z)
