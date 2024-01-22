list1=list()
n=int(input("Enter Number:"))
a=0
while n > 0:
    rem=n%10
    list1.append(rem)
    a+=1
    n//=10
list1.sort()
print(list1[1])

