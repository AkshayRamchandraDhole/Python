x=int(input("Enter Number:"))
i=0
while i < x+1:
    i+=1
    if(i%5==0):
        continue
    else:
        print(i)
    if(i==x):
        break
