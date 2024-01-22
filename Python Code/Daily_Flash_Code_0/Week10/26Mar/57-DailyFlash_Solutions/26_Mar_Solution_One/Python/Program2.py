

n = int(input("Enter Number of elements :\t"))

lst = []



for x in range(n) :

	lst.append(int(input("Enter Element : ")))
	
for x in range(n//2) :
	t = lst[x]
	lst[x] = lst[n-x-1]
	lst[n-x-1] = t
	
for x in lst :
	print(x)
	
