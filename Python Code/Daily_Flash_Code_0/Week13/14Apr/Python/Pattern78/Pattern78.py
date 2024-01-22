r=int(input("Enter Row:"))
m=r/2
m=int(m)
x=0
a=1
for i in range(r):
    for j in range(r):
        if((i+j < m and i < m) or (i-j > m) or (j-i > m and i < m) or (i+j >= r+m)):
            print(" ",end="\t")
        elif(i<=m):
            if(i%2==0):
                print(i+1,end="\t")
                z=i
            else:
                if(i==3):
                    print("B",end="\t")
                else:
                    print(chr(z*a+65),end='\t')
        else:
            if(i%2==0):
                p=((2*m)-i+1)
                print(p,end="\t")
            else:
                print((chr(x+65)),end='\t')
    print()
