class Player:

    trophyWin = 5 

    def __init__(self,pName,jerNo):
        print("Like Constructor")
        self.playerName = pName
        self.jerseyNo = jerNo
        #self.trophyWin = 5

    def playerInfo(self):
        #trophyWin=10
        print("In Method")
        print(self.playerName)
        print(self.jerseyNo)
        print(Player.trophyWin)

obj1 = Player("Virat",18)
obj1.trophyWin = 6

#Player.trophyWin = 6
#obj1.jerseyNo = 10

obj1.playerInfo()

obj2 = Player("Dhoni",7)
obj2.playerInfo()

