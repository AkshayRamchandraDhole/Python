from array import array
l1,l2,l3=[],[],[]
le=int(input("Enter length of array:"))
for i in range(le):
    l1.append(int(input("Enter 1st array:")))
    l2.append(int(input("Enter 2nd array:")))
arr1=array('i',l1)
arr2=array('i',l2)
print("Element of array one:")
for i in arr1:
    print(i,end=" ")
print()
print("Element of array two:")
for i in arr2:
    print(i,end=" ")
print()
arr3=arr1+arr2
print("Third array after concatenation:")
for i in arr3:
    print(i,end=" ")
print()
print("Third array after sorting:")
for i in range(len(arr3)):
    for j in range(len(arr3)):
        if(arr3[i]>arr3[j]):
            tmp=arr3[i]
            arr3[i]=arr3[j]
            arr3[j]=tmp
for i in arr3:
    print(i,end=" ")
print()
