n=int(input("Enter Number:"))
while n > 0:
	rem=n%10
	if(rem==1):
		print("One",end=' ')
	elif(rem==0):
		print("Zero",end=' ')
	elif(rem==2):
		print("Two",end=' ')
	elif(rem==3):
		print("Three",end=' ')
	elif(rem==4):
		print("Four",end=' ')
	elif(rem==5):
		print("Five",end=' ')
	elif(rem==6):
		print("Six",end=' ')
	elif(rem==7):
		print("Seven",end=' ')
	elif(rem==8):
		print("Eight",end=' ')
	elif(rem==9):
		print("Nine",end=' ')
	n=n//10
print()
