i=1
while i > 0:
    n=int(input("Enter Number:"))
    num=n
    rev=0
    while n > 0:
        rem=n%10
        rev=rev*10+rem
        n//=10
    if(num==rev):
        break
    print(num)
    i+=1
