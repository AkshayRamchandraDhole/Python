n=int(input("Enter Number:"))
rev=0
while n > 0:
    rem=n%10
    if(rem==1):
        rem=2
    rev=rev*10+rem
    n//=10
a=0
while rev > 0:
    r=rev%10
    a=a*10+r
    rev//=10
print(a)





