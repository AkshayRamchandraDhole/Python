import numpy
list1=list()
print("Enter A Number Of Elements:-")
num1=int(input())
for i in range(num1):
	print("Enter Element:-")
	var1=int(input())
	list1.append(var1)
print("Element of List is:-")
for i in list1:
	print(i)
arr=numpy.array(list1)
print("Element of Array is:-")
print(arr)
print("Original Array Element:-")
for i in arr:
	print(i)

tuple1=tuple(list1)
'''tup=tuple()
for i in range(num1):
	print("Enter Element:-")
	var2=int(input())
	tup(var2)
'''

arr1=numpy.array(tuple1)
print("Tuple is:-")
print(arr1)
print("Original Tuple;-")
for i in arr1:
	print(i)
print("Using for:-")
for i in range(num1):
	print(i)

type(arr1)
