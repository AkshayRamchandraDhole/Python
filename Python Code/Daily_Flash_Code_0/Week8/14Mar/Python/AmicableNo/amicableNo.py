n1=int(input("First Nummber:"))
n2=int(input("Second Number:"))
su=0
for i in range(1,n1+1):
    if(n1%i==0):
        su=su+i
print(su)
su1=0
for i in range(1,n2+1):
    if(n2%i==0):
        su1=su1+i
print(su1)
if(su==su1 or su1==su):
    print("The Given numbers are Amicable Pair")
