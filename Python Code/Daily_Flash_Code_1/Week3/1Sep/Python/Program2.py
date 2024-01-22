s=int(input("Enter Size:"))
m=s//2
for i in range(s):
    for j in range(s):
        if((i + j < m and i < m) or (i - j > m) or (j - i > m and i < m) or (i+j>=s+m)):
            print(" ",end="\t")
        elif(i<=m):
            print("+",end="\t")
        elif(i==m):
            print("+",end="\t")
        else:
            print("+",end="\t")
    print()

