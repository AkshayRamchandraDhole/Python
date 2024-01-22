n=int(input("Enter Number:"))
su=0
list1=list()
while n > 0:
    rem=n%10
    list1.append(rem)
    su+=1
    n//=10
list1.reverse()
z=max(list1)
for i in list1:
    if(i==1):
        i=z
    print(i,end='')

        


