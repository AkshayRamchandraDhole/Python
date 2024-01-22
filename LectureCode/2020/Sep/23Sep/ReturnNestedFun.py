def outer():
    print("Outer Fun")
    def inner():
        print("In Inner Fun")
    return inner
#print(outer())
x = outer()
#outer()
#print(x())
x()
