import math
x1 = int(input("x1 : "))
y1 = int(input("y1 : "))
x2 = int(input("x2 : "))
y2 = int(input("y2 : "))
x3 = int(input("x3 : "))
y3 = int(input("y3 : "))
s = math.sqrt((y1 - y2) * (y1 - y2) + (x1 - x2) * (x1 - x2)) + math.sqrt((y3 - y2) * (y3 - y2) + (x3 - x2) * (x3 - x2)) + math.sqrt((y1 - y3) * (y1 - y3) + (x1 - x3) * (x1 - x3)) / 2;
ab = math.sqrt((y1 - y2) * (y1 - y2) + (x1 - x2) * (x1 - x2))
bc = math.sqrt((y3 - y2) * (y3 - y2) + (x3 - x2) * (x3 - x2))
ac = math.sqrt((y1 - y3) * (y1 - y3) + (x1 - x3) * (x1 - x3))
print("R : ", math.sqrt(s * (s - ab)* (s - bc) * (s - ac)) / s)
