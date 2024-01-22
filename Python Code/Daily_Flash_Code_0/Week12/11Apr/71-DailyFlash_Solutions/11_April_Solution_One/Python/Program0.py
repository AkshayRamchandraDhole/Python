m = int(input("Enter the number of Elements : "))

numAr1 = list()
numAr2 = list()

print("Enter Elements for Array 1 ")
for i in range(m):
    
	numAr1.append(int(input()))

print("Enter Elements for Array 2 ")
for i in range(m):
    
	numAr2.append(int(input()))


min1 = numAr1[0]
min2 = numAr1[0]

for i in range(m):
			
	if(numAr1[i] > min1 :
		min2 = min1
		min1 = numAr1[i]
		
	elif(numAr1[i] > min2 :
		min2 = numAr1[i]
		
	if(numAr2[i] > min1 :
		min2 = min1
		min1 = numAr2[i]
	
	elif(numAr2[i] > min2 :
		min2 = numAr2[i]
		

print("Second Minimum Number ",min2)	
	


