import math as m
n=0
def menu():
    print("1.Calculate Distance of each side of Triangle")
    print("2.Calculate Perimeter of Triangle")
    print("3.Semi-Perimeter of Triangle")
    print("4.Area Of Triangle")
    print("5.Radius Of In-Circle")
    print("6.Center of In-Circle")
    print("7.Exit")
def main():
    menu()
    n=eval(input("Enter Your Choice:"))
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
    Ra=area/z
    X=((bc*x1)+(ac*x2)+(ab*x3))/x
    Y=((bc*y1)+(ac*y2)+(ab*y3))/x


    if(n==1):
        print("Length of AB:",round(ab,2))
        print("Length of BC:",round(bc,2))
        print("Length of AC:",round(ac,2))

    elif(n==2):
        print("Perimeter Of Triangle:",ab + bc + ac)
    elif(n==3):
        print("Semi-Perimeter of Triangle:",z)
    elif(n==4):
        print("Area Of Triangle:",round(area,2))
    elif(n==5):
        print("Radius Of In-Circle",Ra)
    elif(n==6):
        print("Center of In-Circle is:",round(X,2),",",round(Y,2))
    while n==7:
        break
main()
