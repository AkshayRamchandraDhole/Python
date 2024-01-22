import array as ar
list1=list()
len=int(input("Enter Length of Array:"))
for i in range(len):
    n=int(input("Enter Element:"))
    list1.append(n)
arr=ar.array('i',list1)
print("Minimum Element Entered in that array is:",min(arr))

