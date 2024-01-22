
def automorphic(n):
    num=n 
    sq=n*n
    t=10
    f=0 
    while n > 0:
        rem=sq%t
        if(num==rem):
            f=1
            break
        n//=10
        t*=10
    if(f==1):
        print(num,end=' ')
for i in range(1,61):
    automorphic(i)
    
