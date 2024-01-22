from array import *
def revarr():
	list1=list()
	for i in range(8):
		var=int(input("Enter Array Element:"))
		list1.append(var)
	arr=array('i',list1)
	arr.reverse()
	for i in arr:
		print(i,end=' ')
revarr()
print()
