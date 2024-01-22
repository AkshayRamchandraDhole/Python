n=int(input("Enter Number"))
a=n
s=0
while n > 0:
	rem=n%10
	s=s*10+rem
	n//=10
if(a==s):
	print("Palindrome Number")
else:
	print("Not Palindrome Number")
