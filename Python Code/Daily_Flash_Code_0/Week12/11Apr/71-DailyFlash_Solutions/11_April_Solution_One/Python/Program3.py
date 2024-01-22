rows = int(input("Enter Rows : "))

for i in range(rows):
	for j in range(rows+i):
		
		if(i+j<rows-1) :
			print(" ",end="\t")	
		else :
			print((j+1),end="\t")
	print()
