

for x in range(4) :

	num = (x*x) +x
	for y in range(7-x):

		if y < x :
			
			print(" \t",end=" ")
		else :
			print(num,"\t",end=" ")
			num+=1

	print()
