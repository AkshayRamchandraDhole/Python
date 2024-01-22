def auto(n):
    num=n
    sq=n*n
    t=10
    f=0 
    while n > 0:
         rem=sq%t
         if num==rem:
             f=1 
             break
         n//=10
         t*=10
    if(f==1):
        print(num,end=' ')
ul=int(input("Enter Upper Limit:"))
ll=int(input("Enter Lower Limit"))
for i in range(ul,ll+1):
   auto(i)