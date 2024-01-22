import array as arr
ar=arr.array('i',[10,20,30])
for i in range(3):
	print(ar[i])
ar.append(40)
print("New Array is:-")
for i in range(4):
	print(ar[i])
ar.insert(2,50)
print("New Array After Insert is:-")
for i in range(5):
	print(ar[i])
