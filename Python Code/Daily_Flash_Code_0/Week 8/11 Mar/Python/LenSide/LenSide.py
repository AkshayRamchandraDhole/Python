import math as m
x1=int(input("Enter X1:"))
y1=int(input("Enter Y1:"))
x2=int(input("Enter X2:"))
y2=int(input("Enter Y2:"))
x3=int(input("Enter X3:"))
y3=int(input("Enter Y3:"))
ab=m.sqrt(pow((x2-x1),2)+pow((y2-y1),2))
print("Length of AB:",round(ab,2))
bc=m.sqrt(pow((x3-x2),2)+pow((y3-y2),2))
print("Length of BC:",round(bc,2))
ac=m.sqrt(pow((x3-x1),2)+pow((y3-y1),2))
print("Length of AC:",round(ac,2))