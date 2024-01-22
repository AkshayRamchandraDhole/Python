import math
a=int(input("Enter Angle:"))
r=int(input("Enter Radius:"))
a=math.radians(a)
x=r*math.cos(a)
y=r*math.sin(a)
print("X:",x)
print("Y:",y)
