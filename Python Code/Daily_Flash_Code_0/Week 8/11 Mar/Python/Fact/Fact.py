def fact(n):
    fact=1 
    for i in range(1,n+1):
        fact=fact*i 
    print(fact)
i=1 
while i > 0:
    n=int(input("Enter Number:"))
    if n < 0:
        break
    fact(n)
    i+=1