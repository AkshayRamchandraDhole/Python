from array import array
l=[]
le=int(input("Enter Length of array:"))
for i in range(le):
    l.append(int(input("Enter Element:")))
l.sort()
arr=array('i',l)
print("Second smallest element of array:",arr[1])
