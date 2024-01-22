no=int(input())
sum=0
for i in range(1,no):
	if(no % i == 0):
		sum+=i
		#print(no,"is Perfect Number")
		if(sum==no):
			print(no,"is Perfect Number")
		

