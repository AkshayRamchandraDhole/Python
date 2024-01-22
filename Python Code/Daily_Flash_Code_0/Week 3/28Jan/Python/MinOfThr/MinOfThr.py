x,y,z=input("Enter Three Number:-").split()
x=int(x)
y=int(y)
z=int(z)
if(x <= y and x <= z):
	print("The Minimum number amongest",x,y,"&",z,"is",x)
elif(y <= x and y <= z):
	print("The Minimum number amongest",x,y,"&",z,"is",y)
else:
	print("The Minimum number amongest",x,y,"&",z,"is",z)
