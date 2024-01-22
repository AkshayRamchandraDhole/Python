n=int(input("Enter Number:"))
d=int(input("Enter Digit do u want check:"))
c=0
while n > 0:
    rem=n%10
    if(rem==d):
        c+=1
    n=n//10
print("Count is:",c)
