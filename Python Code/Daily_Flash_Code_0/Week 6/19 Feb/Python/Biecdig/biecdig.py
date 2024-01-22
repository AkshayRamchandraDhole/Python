n=int(input("Enter Number:"))
su=0
dig=0
while n > 0:
	dig=n % 10
	print("Binary of",dig,":",bin(int(dig)))
	n=n/10

