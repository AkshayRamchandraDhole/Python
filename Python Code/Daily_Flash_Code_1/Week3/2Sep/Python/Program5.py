def spyCheck(num):
    tmp=num
    su=0
    pro=1
    rem=0
    while(num!=0):
        rem=num%10
        su+=rem
        pro*=rem
        num//=10
    if(pro==su):
        print(tmp,"is Spy Number..")
    else:
        print(tmp,"is not Spy Number..")
num=int(input("Enter Number:"))
spyCheck(num)

