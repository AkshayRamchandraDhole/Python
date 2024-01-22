
m = n =3

lst1 = list()

for x in range(m) : 

    print("Enter Elements for Row ",x)
    lst1.append(list())
    for y in range(n) :

        lst1[x].append(int(input()))


#Operation 1 2R1+3R2

for i in range(m):

    lst1[0][i] = 2*(lst1[0][i]) + 3*(lst1[1][i])


#Operation 2 2R2 - R3

for i in range(m):

    lst1[1][i] = 2*(lst1[1][i]) - lst1[2][i]



#Operation 3 2R2 - R3

for i in range(m):

    lst1[2][i] = 4*(lst1[2][i])

for i in range(m):
    for j in range(m):

        print(lst1[i][j],"\t",end="")

    print()
