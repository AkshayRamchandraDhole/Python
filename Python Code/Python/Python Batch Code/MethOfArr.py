#Method Of Array
from array import *
a=array("i",[10,18,45,7,25,99,18])
print("Array Is:-")
for i in a:
	print(i,end=' ')
print()

#buffer_info
print(a.buffer_info())

#byte_swap
#print(a.byteswap())

#count
print("Count:-",a.count(18))

#extends
print("Extend Array:-")
a.extend([10,20,30])
for i in a:
	print(i,end=' ')
print()

#fromlist
list1=[17,18,19]
a.fromlist(list1)
for i in a:
	print(i,end=' ')
print()

#reverse
a.reverse()
print("After Reverse:-")
for i in a:
	print(i)


#tobyte
#print(a.tobyte())

#tolist
print(a.tolist())
