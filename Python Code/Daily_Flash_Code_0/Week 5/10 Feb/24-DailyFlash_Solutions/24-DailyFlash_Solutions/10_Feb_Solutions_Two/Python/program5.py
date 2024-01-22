try:
	n = int(input("Enter Number : "))
except ValueError as e:
	print("Not a number")
	exit(0)
cnt = 0
if(n<0):
	exit(0)
while(n != 0):
	n = n // 10
	cnt+=1
		
print("Count : ", cnt)

