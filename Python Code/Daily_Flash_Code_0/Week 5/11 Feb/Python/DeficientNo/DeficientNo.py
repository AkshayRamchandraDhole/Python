def defici(n):
	sum=0
	i=1
	for i in range(1,n+1):
		if(n % i == 0):
			if(n/i==i):
				sum=sum+i
			#print(n,"is Deficient Number")
			else:
				sum=sum+i
				sum=sum+(n/i)
		i=i+1
	return sum
def di(z):
	return(defici(z)<(2*z))
		
a=int(input("Enter Number:"))

if(di(a)):
	print(a,"Number is not Deficient")
else:
	print(a,"is Deficient")
	
	
