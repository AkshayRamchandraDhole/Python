r=int(input("Enter Row:"))
c=int(input("Enter Col:"))
a=2
z=1
for i in range(r):
    count=0
    for j in range(c):
        if(j>=(r-1)-i and j<=(r-1)+i):
            count+=1
            if(count >= 2):
                print(a,end=" ")
                a+=1
            else:
                print(z,end=" ")
                z+=1
                a=z
        else:
            print(" ",end=" ")
    print()

