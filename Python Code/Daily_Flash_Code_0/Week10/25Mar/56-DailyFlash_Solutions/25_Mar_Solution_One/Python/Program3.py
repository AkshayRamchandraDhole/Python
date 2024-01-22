
num = 1
cnt = 2

for x in range(7) :

	for y in range(x+1):

		if x+y <= 6 :
			
			if num <= 10 :
				print(num,end="\t")
				num+=1				
			else :
				print(num-cnt,end="\t")
				num+=1;
				cnt+=2;
			
		elif y < 4:
			print(" \t",end=" ")

	print()
