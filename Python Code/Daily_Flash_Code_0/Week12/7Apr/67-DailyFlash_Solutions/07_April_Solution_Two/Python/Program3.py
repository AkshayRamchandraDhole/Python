rows = int(input("Enter Rows : "))

for i in range(rows):
	for j in range(rows+i):
		
		if(i+j<rows-1) :
			print(" ",end="\t")	
		elif(j %2 == 1) :
				print("1",end="\t")	
		else :
			print("0",end="\t")
	print()
