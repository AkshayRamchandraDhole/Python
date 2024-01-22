def TeamIndia(record):

    def selection():
        print("Player for Team India")
        record()
        print("New Player for Team India")
    return selection

def statePlayer(record):

    def selection():
        print("Player from Ranji or IPL")
        record()
        print("State Level Player selected")
    return selection

@TeamIndia
@statePlayer
def playerSelection():
    print("Godfather watching You")
playerSelection()
#obj = TeamIndia(statePlayer(playerSelection))
