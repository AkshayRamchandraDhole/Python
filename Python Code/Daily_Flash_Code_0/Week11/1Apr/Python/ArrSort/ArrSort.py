from array import array
list1=[]
n=int(input("Enter Length of array:"))
for i in range(n):
    e=int(input("Enter Element:"))
    list1.append(e)
arr=array('i',list1)
for i in range(len(arr)):
    for j in range(i+1,len(arr)):
        if(arr[i]>arr[j]):
            tmp=arr[i]
            arr[i]=arr[j]
            arr[j]=tmp
print("Array After Operation:")
for i in arr:
    print(i,end=' ')
