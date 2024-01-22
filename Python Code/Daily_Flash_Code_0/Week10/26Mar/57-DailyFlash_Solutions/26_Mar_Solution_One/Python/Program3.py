cnt = "HELLO WORLD"

for x in range(7) :

	for y in range(x+1):

		if x+y <= 6 :
			
			print(cnt[y],"\t",end=" ")
			
		elif y < 4:
			print(" \t",end=" ")

	print()
