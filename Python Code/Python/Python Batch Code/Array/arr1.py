from array import *
listArr=list()
print("Enter no of elements:-")
num=int(input())
for i in range(num):
	print("Enter element:-")
	var=int(input())
	listArr.append(5*var)
arrNew=array('i',listArr)
for i in arrNew:
	print(i,end=' ')

