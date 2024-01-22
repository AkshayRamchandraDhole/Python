import array as arr
n=int(input("Length of Array:"))
list1=list()
for i in range(n):
    n1=int(input("Enter Element:"))
    list1.append(n1)
ar=arr.array('i',list1)
su=0
for i in ar:
    su+=i
print("Sum of Elements of Array:",su)
print("Average of Element from Array:",su/n)
