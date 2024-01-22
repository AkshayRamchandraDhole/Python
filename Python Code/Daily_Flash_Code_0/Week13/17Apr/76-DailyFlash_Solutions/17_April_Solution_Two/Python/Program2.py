
m = n =3

lst1 = list()

for x in range(m) : 

    print("Enter Elements for Row ",x)
    lst1.append(list())
    for y in range(n) :

        lst1[x].append(int(input()))


#Operation 1 2C1 + C2

for i in range(m):

    lst1[i][0] = 2*(lst1[i][0]) + (lst1[i][1])

#Operation 2 3C2 - C1

for i in range(m):

    lst1[i][1] = 3*(lst1[i][1]) - lst1[i][0]

#Operation 3 3C3

for i in range(m):

    lst1[i][2] = 3*(lst1[i][2])

for i in range(m):
    for j in range(m):

        print(lst1[i][j],"\t",end="")

    print()
