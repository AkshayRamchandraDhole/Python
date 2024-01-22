import array as ar
n=int(input("Enter Number:"))
list1=list()
while n > 0:
    rem=n%10
    list1.append(rem)
    n//=10
arr=ar.array('i',list1)
for i in arr:
    print(i,end=' ')
print()
