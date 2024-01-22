import math 
def isPrime(n):
    c=0
    for i in range(1,n+1):
        if(n%i==0):
            c+=1
    if(c==2):
        return 1
    else:
        return 0
di=0
i=0
rem=0
su=0
che=input("Enter Number:")
le=len(che)
n=int(che)
while i < le:
    rem=int(n%10)
    n=int(n/10)
    n=int((rem * (10**(le-1))+n))
    print(n)
    di=isPrime(n)
    su+=di
    i+=1
if(su==le):
    print("Circular Prime")
else:
    print("Not Circular Prime")
