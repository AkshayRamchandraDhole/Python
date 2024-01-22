

n = int(input("Enter Number of elements :\t"))

lst = []
sn = 0


for x in range(n) :

	lst.append(int(input("Enter Element : ")))
	sn+=lst[x]

print("Sum = ",sn," Average = ",round(sn/len(lst),2))
