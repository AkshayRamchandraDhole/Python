def isprime():
	n=int(input("Enter a number:"))
	for i in range(1,n+1):
		cn=i
		count=0
		for j in range(1,cn+1):
			if(cn % j==0):
				count=count+1
		if(count==2):
			print(cn,end=' ')
	
isprime()
print()
