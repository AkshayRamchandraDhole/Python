def fibonacii(x=5):
	sum=0
	f1=0
	f2=1
	print(f1,f2,end=' ')
	for i in range(x):
		sum=f1+f2
		print(sum,end=' ')
		f1=f2
		f2=sum
		
fibonacii(x=3)
print()
