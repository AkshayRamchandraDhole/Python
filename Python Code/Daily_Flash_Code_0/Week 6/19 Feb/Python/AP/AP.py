a=int(input("Starting Element:"))
n=int(input("Number Of Element:"))
d=int(input("Enter common difference"))
su=0
for i in range(1,n+1):
	if(i!=n):
		print(a,"+",end=' ')
	else:
		print(a,"=")
	su=su+a
	a=a+d
print(su,end=' ')
print()
