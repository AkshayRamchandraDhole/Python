i=1
while i > 0:
    n=int(input("Enter Number:"))
    num=n
    su=0
    while(n):
        a=1
        b=1
        rem=n%10
        while a<=rem:
            b*=a
            a+=1
        su+=b
        n//=10
    if(n < 0 or su==num):
        break
    print(num)
    i+=1

