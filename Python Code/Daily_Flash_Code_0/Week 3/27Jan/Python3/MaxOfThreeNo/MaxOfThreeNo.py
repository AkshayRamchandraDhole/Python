x,y,z=input().split()
x=int(x)
y=int(y)
z=int(z)
if((x >= y) and (x >= z)):
	print("The Maximum number amongest",x,y,"&",z,"is:-",x)
elif((y >= x) and (y >= z)):
	print("The Maximum number amongest",x,y,"&",z,"is:-",y)
elif((z >= x) and (z >= y)):
	print("The Maximum number amongest",x,y,"&",z,"is:-",z)

