def duck(n):
    #n=int(input("Enter NUmber:"))
    num=n
    while n > 0:
        rem=n%10
        if(rem==0):
            print(num,end='')
            print()
        n//=10
i=1
while i > 0:
    n=int(input("Enter NUmber:"))
    duck(n)
    if n < 0:
        break
    i+=1
