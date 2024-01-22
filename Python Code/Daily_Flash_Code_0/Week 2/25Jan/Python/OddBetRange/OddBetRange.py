min=int(input("Enter Min Of Series:-"))
max=int(input("Enter Max Of Series:-"))
print("Series of odd number between",min,"&",max,":-")
for i in range(min,max):
	if(i % 2 != 0):
		print(i,end=' ')
print()
