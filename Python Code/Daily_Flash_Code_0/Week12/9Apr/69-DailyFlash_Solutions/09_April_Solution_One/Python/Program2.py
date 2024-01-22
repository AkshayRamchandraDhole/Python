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
        if i ==j and numAr[i][j] == 1 :
            flag = True
        elif numAr[i][j] == 0 :
            flag = True
		else :
			flag = False

if flag :
	print("Identity Matrix")

