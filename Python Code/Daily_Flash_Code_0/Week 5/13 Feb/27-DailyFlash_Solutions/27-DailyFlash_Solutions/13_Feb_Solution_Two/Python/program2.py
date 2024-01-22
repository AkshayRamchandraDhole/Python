
num = input("Enter hexadecimal : ")
i = 0
dec = 0
while(i < len(num)):
	if(ord(num[i])>ord('F')):
		print("Not a hexadecimal Number")
		exit(0)	
	if(ord(num[i]) <= ord('9')):
		dec = dec * 16 + (ord(num[i])-ord('0'))
	else:
		dec = dec * 16 + (ord(num[i])-55)
	i+=1
	
print(dec)


