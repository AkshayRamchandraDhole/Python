import array
a=array.array("i",[1,2,3,4,5])
for i in a:
	print(i)
print("Index:")
print(a.index(5))
a.reverse()
print("After Reverse:-")
for i in a:	
	#print(a.index(i))
	print(i)
