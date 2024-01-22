n = int(input("Enter the number of rows : "))

numAr = list()

for i in range(n):
    print("Enter Elements for Row ",i)
    numAr.append(list())
    for j in range(n):
        numAr[i].append(int(input()))

flag = False

for i in range(n):
    for j in range(n):
        numAr[i][j] = 0


for i in range(n):
    for j in range(n):
        print(numAr[i][j],end="\t")
	print()

