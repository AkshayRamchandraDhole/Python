from array import array
le=int(input("Enter Length of array:"))
l1,l2,l3=[],[],[]
for i in range(le):
    n1=int(input("Enter 1st array element:"))
    n2=int(input("Enter 2nd array element:"))
    l1.append(n1)
    l2.append(n2)
arr1=array('i',l1)
arr2=array('i',l2)
print("First array elements:")
for i in arr1:
    print(i,end=' ')
print()
print("Second array elements:")
for i in arr2:
    print(i,end=' ')
print()
for i in range(len(arr1)):
    a=arr1[i]-arr2[i]
    l3.append(a)
arr3=array('i',l3)
print("Substraction elements:")
for i in arr3:
    print(i,end=' ')
print()
