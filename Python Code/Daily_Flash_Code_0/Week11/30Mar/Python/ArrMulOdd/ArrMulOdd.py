from array import array
le=int(input("Enter Length of Array:"))
list1=[]
for i in range(le):
    n=int(input("Enter Element:"))
    list1.append(n)
arr=array('i',list1)
x=len(arr)
mul=1
for i in range(x):
    if(i%2==0):
        mul*=arr[i]
print("Multiplication of odd elements from that array:",mul)
