from numpy import *
list1=list()
print("Enter String:-")
str1=int(input())

for i in range(str1):
	print("Enter A String:-")
	var=input()
	list1.append(var)
arr1=array(list1,str)

for a in arr1:
	if('i' in a):
		print(a)
