row = int(input("Rows\t : "))

for x in range(row) :

	for y in range(row) :

		if x+y == row-1 or x == y :
			print("X",end="\t",sep="")
		else :
			print(" ",end="\t",sep="")
	print()
	

