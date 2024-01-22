m = int(input("Enter the number of Elements : "))

numAr1 = list()
numAr2 = list()

print("Enter Elements for Array 1 ")
for i in range(m):
    
	numAr1.append(int(input()))

print("Enter Elements for Array 2 ")
for i in range(m):
    
	numAr2.append(int(input()))


for i in range(m):
   print(abs(numAr1[i] - numAr2[i]),end="\t")

print()


