import math as m
x1=float(input("X1:"))
y1=float(input("Y1:"))
x2=float(input("X2:"))
y2=float(input("Y2:"))
x3=float(input("X3:"))
y3=float(input("Y3:"))
ab=m.sqrt(pow(y2-y1,2)+pow(x2-x1,2))
bc=m.sqrt(pow(y2-y3,2)+pow(x2-x3,2))
ac=m.sqrt(pow(y3-y1,2)+pow(x3-x1,2))
x=ab+bc+ac
z=x/2
area=(z*(z-ab)*(z-bc)*(z-ac))**0.5
h=2*area/ab
print("Height of triangle is:",round(h,2))
