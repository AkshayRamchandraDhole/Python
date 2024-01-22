ch=input("Enter a Character or Digit or Special Character:-")

if((ch >= 'a' and ch <= 'z' ) or(ch >= 'A' and ch <= 'Z')):
	print(ch,"is a character")
elif(ch >= '0' and ch <= '9'):
	print(ch,"is a Digit")
else:
	print(ch,"is a Special Character")
