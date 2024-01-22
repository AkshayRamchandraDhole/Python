class Outer:
    x = 10
    def __init__(self):
        
        self.y=20

    def m1(self):
        print("In m1 method")
        print(Outer.x)
        print(self.y)

    class Inner:
        x1 = 30

        def __init__(seld):
            
            seld.y1=40

        def m2(self):
            print("In M2 Method")
            print(Outer.x)
            print(Outer().Inner.x1)
            print(Outer().y)
            print(self.y1)

#Outer()
#print(Outer().x)
#print(Outer().y)
#print(Outer().Inner.x1)
#print(Outer().Inner().y1)
Outer().m1()
Outer().Inner().m2()
