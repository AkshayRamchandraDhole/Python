from array import array
le=int(input("Enter the length of array:"))
list1=[]
list2=[]
for i in range(le):
    n1=int(input("Enter 1st Array Element:"))
    n2=int(input("Enter 2nd Array Element:"))
    list1.append(n1)
    list2.append(n2)
arr1=array('i',list1)
arr2=array('i',list2)
print("Before Swap 1st Array:")
for i in arr1:
    print(i,end=' ')
print()
print("Before Swap 2nd Array:")
for i in arr2:
    print(i,end=' ')
print()
for i in range(len(arr1)):
     arr2[i],arr1[i]=arr1[i],arr2[i]
print("After Swap 1st Array:")
for i in arr1:
    print(i,end=' ')
print()
print("After Swap 2nd Array:")
for i in arr2:
    print(i,end=' ')
print()
