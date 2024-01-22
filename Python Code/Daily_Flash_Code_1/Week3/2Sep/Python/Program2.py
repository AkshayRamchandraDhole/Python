def pattern():
    for i in range(80,130):
        num=i
        tmp=num
        rem=0
        rev=0
        while(num!=0):
            rem=num%10
            rev=rev*10+rem
            num//=10
        if(rev==tmp):
            print(tmp,end=",")
    print()
pattern()

