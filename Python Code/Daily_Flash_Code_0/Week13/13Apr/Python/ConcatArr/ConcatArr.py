from array import array
le=int(input("Enter length of array:"))
l1,l2,l3=[],[],[]
for i in range(le):
    n1=l1.append(int(input("Enter 1st array element:")))
    n2=l2.append(int(input("Enter 2nd array element:")))
arr1=array('i',l1)
arr2=array('i',l2)
print("Element in array one:")
for i in arr1:
    print(i,end=' ')
print()
print("Element in array two:")
for i in arr2:
    print(i,end=' ')
print()
arr3=arr1+arr2
print("Third array after concatenation:")
for i in arr3:
    print(i,end=' ')
print()
