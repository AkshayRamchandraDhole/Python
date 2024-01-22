import array
list1=[]
le=int(input("Enter Length of Array:"))
for i in range(le):
    n=int(input("Enter Element:"))
    list1.append(n)
arr=array.array('i',list1)
z=len(arr)
for i in range(1,z):
    if(i%2==0):
        a=arr[i]
        print(a*a,end=' ')
