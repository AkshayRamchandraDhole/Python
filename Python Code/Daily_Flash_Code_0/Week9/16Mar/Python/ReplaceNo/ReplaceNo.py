n=int(input("Enter Number:"))
n1=int(input("Enter Digit Do u want to replace with 1:"))
rev=0
while n > 0:
    rem=n%10
    if(rem==1):
        rem=n1
    rev=rev*10+rem
    n//=10
a=0
while rev > 0:
    r=rev%10
    a=a*10+r
    rev//=10
print(a)

