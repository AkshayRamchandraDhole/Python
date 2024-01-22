import math as m

x1=int(input("Enter X1:"))
y1=int(input("Enter Y1:"))
x2=int(input("Enter X2:"))
y2=int(input("Enter Y2:"))
x=m.sqrt(pow((x2-x1),2)+pow((y2-y1),2))
print("Distance Of Line:",x)