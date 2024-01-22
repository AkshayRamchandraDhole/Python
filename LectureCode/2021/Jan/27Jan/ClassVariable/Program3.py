class Cricket():

    def __init__(self,name,jer):

        self.name=name
        self.jer=jer

    def info(self):
        print(id(self))
        print(id(self.name))
        print(id(self.jer))

obj1 = Cricket("Dhoni",7)
print(id(obj1))
obj1.info()


obj2 = Cricket("Virat",18)
print(id(obj2))
obj2.info()


obj3 = Cricket("Dhoni",7)
print(id(obj3))
obj3.info()


