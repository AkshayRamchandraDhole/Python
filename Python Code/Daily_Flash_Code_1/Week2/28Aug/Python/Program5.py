r=int(input("Enter Row :"))
c=int(input("Enter Col :"))
s1,s2=input("Enter two Sign :").split()
m=r/2
m=int(m)
for i in range(r):
    for j in range(r):
        if((i+j < m and i < m) or (i-j > m) or (j-i > m and i < m) or (i+j >= r+m)):
            print(s2,end="")
        elif(i<=m):
            print(s1,end="")
        else:
            print(s1,end="")
    print()

