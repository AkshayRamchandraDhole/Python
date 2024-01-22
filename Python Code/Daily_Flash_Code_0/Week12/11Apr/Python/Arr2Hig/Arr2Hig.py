from array import array
l=[]
le=int(input("Enter Length of array:"))
for i in range(le):
    l.append(int(input("Enter Element:")))
l.sort()
arr=array('i',l)
a=len(arr)
print("The Second largest element of array:",arr[(len(arr)-2)])
