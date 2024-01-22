def fibo():
	n=int(input("Enter A Number:-"))
	f1=0
	f2=1
	print(f1,f2,end=' ')
	for i in range(n+1):
		f3=f1+f2
		print(f3,end=' ')
		f1=f2
		f2=f3
fibo()
print()
