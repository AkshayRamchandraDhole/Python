class ICCTrophy():

    trophyWin = 3 

    def __init__(self,name):

        self.name = name
        print("Const: ",self.trophyWin)
        print("Const id : ",id(self.trophyWin))

    def win(self):
        print(self.name)
        print(id(self.trophyWin))
        print(self.trophyWin)

    def change(self):
        ICCTrophy.trophyWin += 1 

obj1 = ICCTrophy("Dhoni")
#obj1.win()

#obj1.trophyWin = 4 

#obj1.change()
obj1.win()

obj2 = ICCTrophy("Virat")
obj2.win()

obj1.change()
obj1.win()

obj2.win()
