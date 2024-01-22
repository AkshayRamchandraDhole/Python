from array import array
l1,l2,l3=[],[],[]
le=int(input("Enter length of array:"))
for i in range(le):
    l1.append(int(input("Enter 1st array element:")))
    l2.append(int(input("Enter 2nd array element:")))
arr1=array('i',l1)
arr2=array('i',l2)
print("Element of array 1:")
for i in arr1:
    print(i,end=" ")
print()
print("Element of array 2:")
for i in arr2:
    print(i,end=" ")
print()
arr3=arr1+arr2
print("Array after concatenation:")
for i in arr3:
    print(i,end=" ")
print()
c=0
for i in range(len(arr3)):
    for j in range(len(arr3)):
        if(arr3[i]==arr3[j]):
            c+=1
            if(c>=2):
                arr3[j]=0
    c=0
print("Array after replacement:")
for i in arr3:
    print(i,end=" ")
print()
