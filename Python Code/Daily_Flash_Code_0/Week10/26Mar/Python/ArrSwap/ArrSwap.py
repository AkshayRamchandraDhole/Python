import array
le=int(input("Enter Length of Array:"))
list1=list()
for i in range(le):
    n=int(input("Enter Element:"))
    list1.append(n)
ar=array.array('i',list1)
print("Array Before Swapping:")
for i in ar:
    print(i,end=' ')
l=len(ar)
tmp=ar[0]
ar[0]=ar[l-1]
ar[l-1]=tmp
tp=ar[1]
ar[1]=ar[l-2]
ar[l-2]=tp
print()
print("Array After Swapping:")
for i in ar:
    print(i,end=' ')
print()
