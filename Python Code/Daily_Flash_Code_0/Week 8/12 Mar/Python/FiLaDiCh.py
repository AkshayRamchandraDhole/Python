n=int(input("Enter Number:"))
list1=list()
while n > 0:
    rem=n%10
    list1.append(rem) 
    n//=10
s=len(list1)
tmp=list1[0]
list1[0]=list1[s-1]
list1[s-1]=tmp 
list1.reverse()
for i in list1:
    print(i,end='')
    
