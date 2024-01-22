
for x in range(7) :

	for y in range(x+1):

		if x+y <= 6 :
			
			if x < 4 :
				print(chr(x+65),end="\t")			
			else :
				print(chr(7-x+64),end="\t")
			
		elif y < 4:
			print(" \t",end=" ")

	print()
