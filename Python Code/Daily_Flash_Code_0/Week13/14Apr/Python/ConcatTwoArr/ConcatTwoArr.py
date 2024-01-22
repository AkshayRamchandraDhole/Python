from array import array
l1,l2,l3=[],[],[]
le=int(input("Enter length of array:"))
for i in range(le):
    n1=l1.append(int(input("Enter 1st array element:")))
    n2=l2.append(int(input("Enter 2nd array element:")))
arr1=array('i',l1)
arr2=array('i',l2)
arr3=arr1+arr2
print("Third Array After Concatenation:")
for i in arr3:
    print(i,end=" ")
print()
for i in range(len(arr3)):
    for j in range(len(arr3)):
        if(arr3[i]<arr3[j]):
            tmp=arr3[i]
            arr3[i]=arr3[j]
            arr3[j]=tmp
print("Third array After sorting:")
for i in arr3:
    print(i,end=" ")
print()
