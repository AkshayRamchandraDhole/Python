class PythonClass:

    def __init__(self):

        print("Constructor")

    def display(self):

        print("In Python Class")

    def __del__(self):

        print("Destructor")

obj1 = PythonClass()
obj1.display()
del obj1
obj2 = PythonClass()
obj2.display()
obj1.display()
