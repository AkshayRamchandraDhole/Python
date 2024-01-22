import math
x1 = int(input("x1 : "))
y1 = int(input("y1 : "))
x2 = int(input("x2 : "))
y2 = int(input("y2 : "))
x3 = int(input("x3 : "))
y3 = int(input("y3 : "))
print("AB :", math.sqrt((y1 - y2) * (y1 - y2) + (x1 - x2) * (x1 - x2)), "\nBC :", math.sqrt((y3 - y2) * (y3 - y2) + (x3 - x2) * (x3 - x2)), "\nCA :", math.sqrt((y1 - y3) * (y1 - y3) + (x1 - x3) * (x1 - x3)))
