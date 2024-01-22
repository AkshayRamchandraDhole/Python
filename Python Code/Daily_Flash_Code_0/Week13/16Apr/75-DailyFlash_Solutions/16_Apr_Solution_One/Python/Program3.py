row = int(input("Rows\t : "))

ch = 65
row = row//2 + 1

for x in range(row*2) :

	for y in range(row) :

		if x+y >= row-1 and x-y <= row-1 :
			print(" ",chr(ch),"  ",end="",sep="")
			ch+=1
		else :
			print("  ",end="",sep="")
	print()
	ch-=1

