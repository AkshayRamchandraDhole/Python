def pattern():
    for i in range(180,380):
        num=i
        tmp=num
        rem=0
        rev=0
        while(num!=0):
            rem=num%10
            rev=rev*10+rem
            num//=10
        if(rev==tmp):
            if(prime(rev)==True):
                print(rev,end=",")
    print()
def prime(num):
    count=0
    for i in range(1,num+1):
        if(num%i==0):
            count+=1
    if(count==2):
        return True
pattern()

