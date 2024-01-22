
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
ab = math.sqrt(pow(y2-y1,2)+ pow(x2-x1,2))
bc = math.sqrt(pow(y2-y3,2)+ pow(x2-x3,2))
ac = math.sqrt(pow(y3-y1,2)+ pow(x3-x1,2))

print("1: Distances of Each side of Triangle")
print("2: Perimeter of Triangle")
print("3: Area of Triangle")
print("4: Radius of In-Circle")
print("5: Centre of In-Circle")
choice =  int(input("Enter Choice : "))
if(choice ==  1):
    print("Distance (AC): ", ab)
    print("Distance (BC): ", bc)
    print("Distance (AC): ", ac)
elif choice == 2:
    print("Perimeter of Triangle: ", ac + bc + ab)
elif choice == 3:
    area = math.sqrt(p*(p-ab)*(p-bc)*(p-ac))
    print("Area of Triangle: ", area)
elif choice == 4:
    area = math.sqrt(p*(p-ab)*(p-bc)*(p-ac))
    p = (ab + ac + bc) / 2
    print("Radius of In-Circle: ", area/p)
elif choice == 5:
    peri = (ab + ac + bc)
    x = (bc*x1 + ac*x2 + ab*x3)/peri
    y = (bc*y1 + ac*y2 + ab*y3)/peri
    print("Centre of In-Circle: (", x,",",y,")")
else:
    print("Wrong choice")

