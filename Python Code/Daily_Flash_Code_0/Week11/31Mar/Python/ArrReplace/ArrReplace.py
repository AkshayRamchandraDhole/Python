from array import array
le=int(input("Enter length of array:"))
list1=[]
for i in range(le):
    x=int(input("Enter Element:"))
    list1.append(x)
arr=array('i',list1)
a=len(arr)
sq=0
cu=0
for i in range(a):
    if(i%2==0):
        aa=0
        aa=arr[i]
        aa*=aa*aa
        arr[i]=aa
        #print(arr[i])
    else:
        aaa=0
        aaa=arr[i]
        aaa*=aaa
        arr[i]=aaa
       # print(arr[i])
print("Array After Operation:")
for i in arr:
    print(i,end=' ')
print()
        

