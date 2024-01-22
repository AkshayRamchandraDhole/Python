from array import *
arrNew=array('i',[18,45,10])
x=len(arrNew)
for i in range(x):
	print(arrNew[i],end=' ')
arrNew.append(25)
print()
print("New Array is:-")
for i in arrNew:
	print(i,end=' ')
print()

arrNew.insert(0,99)
print("After Append:-")
for i in arrNew:
	print(i)
