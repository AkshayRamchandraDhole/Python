import array as arr
a=arr.array('i',[1,2,3,4,5])
for i in a:
	print(i)
a.pop()
print("After Pop is:-")
for i in a:
	print(i)
a.pop(2)
print("After Second Pop;-")
for i in a:
	print(i,end=' ')
print()
a.remove(4)
print("After Remove is:-")
for i in a:
	print(i,end=' ')
	#a.pop(i)
	#a.remove(i)
print()  
