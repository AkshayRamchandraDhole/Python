
k = int(input("Enter Number : "))
print("Duck Numbers : ")
for i in range(1, k + 1):
	n = i
	while(n != 0):
		if(n%10 == 0) :
			print(i, end = " ")
			break
		
		n = n // 10
print()
