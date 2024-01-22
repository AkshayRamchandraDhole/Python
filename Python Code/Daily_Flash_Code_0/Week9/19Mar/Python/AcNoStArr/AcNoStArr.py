import array as arr
n=int(input("Enter Number:"))
list1=list()
while n > 0:
    rem=n%10
    list1.append(rem)
    n//=10
a=arr.array('i',list1)
a.reverse()
for i in a:
    print(i,end='')
print()
