x=int(input("Min of Series:-"))
y=int(input("Max of Series:-"))
print("Series of Even Numbers Ranging Between",x,"&",y,"is:-")
for i in range(x,y):
	if(i % 2 == 0):
		print(i,end=' ')
print()
		
