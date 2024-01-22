import array as arr
list1=list()
n=int(input("Length of Array:"))
for i in range(n):
    n1=int(input("Enter Array Element:"))
    list1.append(n1)
ar=arr.array('i',list1)
print("Array Element is:")
for i in ar:
    print(i,end=' ')
print()
print("Maximum element of that array:",max(ar))
