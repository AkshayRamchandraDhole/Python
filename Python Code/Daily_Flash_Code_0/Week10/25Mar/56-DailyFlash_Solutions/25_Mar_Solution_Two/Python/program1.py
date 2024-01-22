import math

n = int(input("Enter length: "))
x = int(input("Enter x : "))
y = int(input("Enter y : "))
mul = 0
cnt = 1
while(cnt <= n):
	mul = mul + cnt/math.pow((x+y), cnt)
	cnt+=1
	
print(mul)

