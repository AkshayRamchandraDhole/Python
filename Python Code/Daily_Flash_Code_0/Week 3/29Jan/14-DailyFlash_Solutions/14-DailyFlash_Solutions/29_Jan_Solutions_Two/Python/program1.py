try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)	

if(n < 0):
	exit(0)
	
i = 10
while(i > 0):
	print(n , "*",  i, " = " , n * i)
	i -= 1
