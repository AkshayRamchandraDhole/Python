def Google(emp):

    def round1():
        print("Google Selection Process")
        print("Aptitude Test")
        emp()

    return round1

def TechnicalTeam(emp):

    def round2():
        print("Coding Round")
        emp()

    return round2

@Google
@TechnicalTeam
def empSelection():
    print("You are selected in Google")
empSelection()


