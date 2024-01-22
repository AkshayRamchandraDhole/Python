class Player:

    def __init__(self,pName,jerNo):
        print("Like Constructor")
        self.playerName = pName
        self.jerseyNo = jerNo

    def playerInfo(self):
        print("In Method")
        print(self.playerName)
        print(self.jerseyNo)

obj1 = Player("Virat",18)
#obj1.playerName = "Sachin"
#obj1.jerseyNo = 10
obj1.playerInfo()

obj2 = Player("Dhoni",7)
obj2.playerInfo()

