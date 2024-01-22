n=int(input("Enter Number:"))
list1=list()
while n > 0:
	rem=n%10
	list1.append(rem)
	n//=10
print(min(list1))
