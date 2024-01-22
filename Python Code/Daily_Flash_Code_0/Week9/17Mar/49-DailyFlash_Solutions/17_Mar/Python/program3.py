
print("Enter Numbers : ")
while 1 :
	n = int(input())
	rev = 0
	temp = n
	while(n != 0):
		rev = rev + (n % 10)*(n%10)*(n%10)
		n //= 10
		
	if(temp != rev):
		print(temp)
	else:
		break

