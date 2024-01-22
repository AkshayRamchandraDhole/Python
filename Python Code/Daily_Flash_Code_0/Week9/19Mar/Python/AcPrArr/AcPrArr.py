import array as a
list1=list()
l=int(input("Enter Length of String:"))
for i in range(l):
    n=input("Enter Character:")
    list1.append(n)
    arr=a.array('u',list1)
for i in arr:
    print(i,end='')
