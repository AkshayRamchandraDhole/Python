def priNo(n):
	ip=1
	for i in range(2,int(n/2),1):
		if(n%i==0):
			ip=0
			break
	return ip
n=int(input("Enter Number:"))
f=0
i=2
for i in range(2,int(n/2),1):
	if(priNo(i)==1):
		if(priNo(n-i)==1):
			print(n,"=",i,"+",n-i)
			f=1
