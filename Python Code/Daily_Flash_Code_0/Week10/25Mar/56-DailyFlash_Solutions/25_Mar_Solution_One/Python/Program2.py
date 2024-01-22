

n = int(input("Enter Number of elements :\t"))

lst = []



for x in range(n) :

	lst.append(int(input("Enter Element : ")))
	
lst[0],lst[n-1] = lst[n-1],lst[0]
print(lst)
