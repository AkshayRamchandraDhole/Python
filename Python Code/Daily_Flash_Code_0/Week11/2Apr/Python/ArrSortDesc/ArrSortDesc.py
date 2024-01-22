from array import array
list1=[]
def arrdesc():
    le=int(input("Enter Length of array:"))
    for i in range(le):
        n=int(input("Enter Element:"))
        list1.append(n)
    arr=array('i',list1)
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            if(arr[i]<arr[j]):
                tmp=arr[i]
                arr[i]=arr[j]
                arr[j]=tmp
    return arr
x=arrdesc()
print("Array After Operation:")
for i in x:
    print(i,end=' ')
print()
