c1 = 64
c2 = 64
print("Enter Alphabets :")
while(True) :	
	c2 = c1
	c1 = ord(input())		
	if(1 != c1-c2 or c1 > 90):
		break
print("You Entered Wrong Alphabet")

