class Cricket():

    def __init__(self,name,jer):

        self.name=name
        self.jer=jer

    def info(self):
        print(self.name)
        print(self.jer)

obj1 = Cricket("Dhoni",7)
obj1.info()

obj2 = Cricket("Virat",18)
obj2.info()

obj3 = Cricket("Dhoni",7)
obj3.info()
