m = int(input("Enter the number of rows : "))
n = int(input("Enter the number of columns : "))

numAr = list()

for i in range(m):
    print("Enter Elements for Row ",i)
    numAr.append(list())
    for j in range(n):
        numAr[i].append(int(input()))

mx = numAr[0][0]
sn = 0

for i in range(m):
    for j in range(n):
        if numAr[i][j]%2 == 0 :
            sn +=numAr[i][j]
        elif mx <  numAr[i][j] :
            mx = numAr[i][j]

print("Product of Sum of Even Elements of Array and Max Odd Numbers = ",mx*sn);


