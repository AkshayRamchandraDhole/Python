def duck(n):
    num=n
    while n > 0:
        rem=n%10
        if(rem==0):
            print(num,end=' ')
        n//=10
for i in range(1,501):
    duck(i)