n=int(input("Enter Number:"))
rn=int(input("Enter Digit from number to replace:"))
dr=int(input("Enter Digit to replace with:"))
rev=0
while n > 0:
    rem=n%10
    if(rem==rn):
        rem=dr
    rev=rev*10+rem
    n//=10
a=0
while rev > 0:
    rem=rev%10
    a=a*10+rem
    rev//=10
print("New Number is:",a)
