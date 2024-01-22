import numpy
r=int(input("Row:"))
c=int(input("Col:"))
l=[]
for i in range(r):
    l.append([])
for i in range(r):
    for j in range(c):
        l[i].append(int(input("Enter element:")))
print("Element:")
for i in range(r):
    for j in range(c):
        print(l[i][j],end=' ')
    print()
x=(l[0][0] * (l[1][1] * l[2][2] - l[1][2] * l[2][1]))
y=(l[0][1] * (l[1][0] * l[2][2] - l[1][2] * l[2][0]))
z=(l[0][2] * (l[1][0] * l[2][1] - l[1][1] * l[2][0]))
det=x-y+z
print("Determinant of the entered matrix:",det)
