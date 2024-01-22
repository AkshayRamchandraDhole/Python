n=int(input("Enter Number:"))
rev=0
while n > 0:
	rem=n%10
	if(rem==0):
		print("Is Duck Number")
		rev+=1
		break
	n//=10
if(rev==0):
	print("IS not Duck number")
