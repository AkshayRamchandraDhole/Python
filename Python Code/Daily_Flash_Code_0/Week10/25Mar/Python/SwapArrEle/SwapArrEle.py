import array
list1=list()
le=int(input("Enter Length of Array:"))
for i in range(le):
    n=int(input("Enter Element:"))
    list1.append(n)
arr=array.array('i',list1)
print("Array Before Swapping:")
for i in arr:
    print(i,end=' ')
print()
s=len(arr)

tmp=arr[0]
arr[0]=arr[s-1]
arr[s-1]=tmp
print("Array After Swapping:")
for i in arr:
    print(i,end=' ')
print()

