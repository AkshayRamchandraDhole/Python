n=int(input("Enter Number:"))
tmp=n
su=0
while n > 0:
	rem=n%10
	su+=rem
	n=n//10
d=tmp // su
if(d != 0):
	print(tmp,"is harshad number")
else:
	print(tmp,"is not harshad number")
