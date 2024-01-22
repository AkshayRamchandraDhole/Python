iNum=int(input("Enter Number:"))
tmpNum=iNum
tmp=iNum
iCount=0
rem=0
su=0
while(iNum!=0):
    iCount+=1
    iNum//=10
while(tmpNum!=0):
    rem=tmpNum%10
    su+=rem**iCount
    tmpNum//=10
if(su==tmp):
    print(tmp," is Narcissistic Number...")
else:
    print(tmp," is not Narcissistic Number...")

