d,m,y=input().split()
d=int(d)
m=int(m)
y=int(y)
if(m >= 12):
	print("Invalid Month")
elif(m == 2 and d > 28):
	print("Date Does not allow")
else:
	print("Date Exists")
