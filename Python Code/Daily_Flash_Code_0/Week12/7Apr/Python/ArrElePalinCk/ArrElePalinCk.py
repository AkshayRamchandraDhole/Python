from array import array
def CheckPali(n):
    z=n
    su=0
    while(n>0):
        rem=n%10
        su=su*10+rem
        n//=10
    if(z==su):
        print(su,end=' ')
        

le=int(input("Enter Length of Array "))
list1=[]
for i in range(le):
    n=int(input("Enter Element:"))
    list1.append(n)
arr=array('i',list1)
for i in arr:
    CheckPali(i)
print()
