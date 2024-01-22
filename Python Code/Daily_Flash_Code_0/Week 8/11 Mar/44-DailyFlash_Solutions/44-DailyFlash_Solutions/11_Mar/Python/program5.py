
import math
print("1st point (A) :")
x1 = float(input())
y1 = float(input())

print("2nd point (B) :")
x2 = float(input())
y2 = float(input())

print("1st point (C) :")
x3 = float(input())
y3 = float(input())

print("Distance (AC): ", math.sqrt(pow(y2-y1,2)+ pow(x2-x1,2)))
print("Distance (BC): ", math.sqrt(pow(y2-y3,2)+ pow(x2-x3,2)))
print("Distance (AC): ", math.sqrt(pow(y3-y1,2)+ pow(x3-x1,2)))
