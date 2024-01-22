from array import array
list1=[]
list2=[]
le=int(input("Enter length of array:"))
for i in range(le):
    n1=int(input("Enter first array element:"))
    n2=int(input("Enter second array element:"))
    list1.append(n1)
    list2.append(n2)
arr1=array('i',list1)
arr2=array('i',list2)
#print(arr1)
#print(arr2)

mul=1
list3=[]
for i in range(len(arr1)):
        mul=arr1[i]*arr2[i]
        list3.append(mul)
arr3=array('i',list3)
print("After operation element in third array is:")
for i in arr3:
    print(i,end=' ')
print()

    
