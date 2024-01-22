r=int(input("Enter Size:"))
a=1
for i in range(r,-(r+1),-1):
    for j in range(1,abs(i)+1):
        print(" ",end="")
    if(i >= 0):
        a=1
    else:
        a=j+1
    for i in range(r,abs(i)-1,-1):
        print(str(a)+" ",end="")
        a+=1
    print()
