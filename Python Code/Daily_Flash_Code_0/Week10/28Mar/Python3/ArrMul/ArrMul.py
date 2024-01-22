import array
le=int(input("Enter Length of Array:"))
list1=[]
for i in range(le):
    n=int(input("Enter Element:"))
    list1.append(n)
arr=array.array('i',list1)
a=len(arr)
mul=1
for i in range(a):
    if(i%2!=0):
        mul*=arr[i]
print("Multiplication of Even Element of Array Element:",mul)
