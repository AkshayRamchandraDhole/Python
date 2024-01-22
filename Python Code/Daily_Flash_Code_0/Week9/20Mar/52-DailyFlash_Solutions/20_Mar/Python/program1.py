import math
n = int(input("Enter Number : "))
mul = 1
for i in range(1,n+1):
	mul = mul*(math.pow(i,i))
print(mul)

