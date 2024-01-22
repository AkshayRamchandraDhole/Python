m = int(input("Enter the number of rows : "))
n = int(input("Enter the number of columns : "))

numAr = list()

for i in range(m):
	print("Enter Elements for Row ",i)
	for j in range(n):
    	numAr[i].append(int(input()))

print("Entered Elements are ")
for i in range(m):
	for j in range(n):
		if(i == j):	
    		print(numAr[i][j],end="\t")
	print()


