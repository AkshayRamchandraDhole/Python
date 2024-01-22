
lst = []
sn = 0

for i in range(int(input("Enter Valu of N : "))):
	
	lst.append(int(input("Enter Element ")))
	sn+=lst[i]

avg = round(sn/len(lst),2)
var = 0

for i in range(len(lst)) :

	var = round((var + ((lst[i]-avg)**2) / len(lst)),2)

print("Average = ",avg)
print("Variance = ",var)
print("Standard Deviation = ",round(var**0.5,2))
