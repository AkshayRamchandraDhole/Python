n=int(input("Enter Number:"))
list1=list()
a=0
while n > 0:
	rem=n%10
	list1.append(rem)
	a+=1
	n//=10
list1.sort()
list1.reverse()
for i in range(a):
    if(i==1):
        print(list1[i])
    