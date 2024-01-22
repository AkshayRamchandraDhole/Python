i=1
while i > 0:
    n=int(input("Enter Number:"))
    num=n
    arm=0
    while n > 0:
        rem=n%10
        arm=arm+rem*rem*rem
        n//=10
    if(n < 0 or num==arm):
        break
    print(num)
    i+=1
