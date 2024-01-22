
n=int(input("Enter Number:"))
num=n
sq=n*n
print("Square Of Number:",n,"is:",sq)
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
    print("Automorphic Number.....")
else:
    print("Non Automorphic Number.....")