
try:
	n = int(input("Enter Number : "))
except ValueError as e:
	print("Not A Number")
	exit(0)

cnt = 0
c = 0
lst = list()
while n!=0:

	if n%10>=8:
		print("Not a octal Number")
		exit(0)
	i = n %10;
	c = 0
	while(c < 3):
		lst.append(chr(i%2 + 48))
		i = i // 2
		c+=1;
	n = n//10

i = len(lst)-1
while(i >= 0):
	print(lst[i], end = "")
	i-=1
print()