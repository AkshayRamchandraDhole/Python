def prime(num):
    iCount=0
    for i in range(1,num+1):
        if(num % i == 0):
            iCount+=1
    if(iCount==2):
        return True
    else:
        return False
def reverse(num):
    rem=0
    rev=0
    while(num!=0):
        rem=num%10
        rev=rev*10+rem
        num//=10
    return rev
iNum=int(input("Enter Any Number:"))
pri=prime(iNum)
rev=reverse(iNum)
revPri=prime(rev)
if(prime(iNum) and prime(rev)):
    print(iNum,"is Emirp Number..")
else:
    print(iNum," is not Emirp Number..")

