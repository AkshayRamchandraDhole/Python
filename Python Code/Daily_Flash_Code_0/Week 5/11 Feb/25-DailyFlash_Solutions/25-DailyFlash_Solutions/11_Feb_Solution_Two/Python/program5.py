
try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)
cnt = 0

if(n<0):
	exit(0)
while(n != 0):
	if((n%10)%2==0):
		cnt += 1
	n = n // 10
print("Count : ",cnt)
