s=int(input("Enter Size:"))
x=s // 2 + 1
z=0
for i in range(1,s+1):
    for j in range(1,s+1):
        if(j == x or j == s - x + 1):
            print(chr(z+65),end="")
        else:
            print(" ",end="")
    if(i <= s/2):
        x-=1
        z+=1
    else:
        x+=1
        z-=1
    print()
