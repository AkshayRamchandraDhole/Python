import math
x1 = int(input("x1 : "))
y1 = int(input("y1 : "))
x2 = int(input("x2 : "))
y2 = int(input("y2 : "))
x3 = int(input("x3 : "))
y3 = int(input("y3 : "))

a = math.sqrt((y1 - y2) * (y1 - y2) + (x1 - x2) * (x1 - x2))
b = math.sqrt((y3 - y2) * (y3 - y2) + (x3 - x2) * (x3 - x2))
c = math.sqrt((y1 - y3) * (y1 - y3) + (x1 - x3) * (x1 - x3))
p = a + b + c
print("X : ", (a * x1 + b * x2 + c * x3)/ p, "Y = ", (a * y1 + b * y2 + c * y3) / p)
