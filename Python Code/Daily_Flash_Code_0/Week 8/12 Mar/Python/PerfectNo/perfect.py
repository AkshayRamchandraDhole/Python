def perfect(n):
    num=n
    su=0
    for i in range(1,n):
        if(n%i==0):
            su=su+i
    if(num==su):
        print(num)
    
i=1 
while i > 0:
    n=int(input("Enter Number:"))
    perfect(n)
    if(n<0):
        break
    i+=1