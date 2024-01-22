n=int(input("Enter Number:"))
o=0
e=0
rem=0
while n > 0:
	rem = n % 10
	if(rem % 2 == 0):
		e+=1
	else:
		o+=1
	n= n // 10
print("Even Digit Count:",e)
print("Odd Digit Count:",o)
	
