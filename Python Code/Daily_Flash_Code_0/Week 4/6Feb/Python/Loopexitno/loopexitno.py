list1=list()
for i in range(5):
	n=int(input())
	list1.append(n)

	if(i == 0):
		continue
	if(list1[i] < list1[i-1]):
		#break
		print("Exit!!!")
		break
	
