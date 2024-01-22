def UriAttack(launchpad):

    def plan():
        print("Meeting with Ajit Doval")
        launchpad()
        print("Handle Casualty")
        print("Yeh Naya India Hai")
    return plan
def launchpad1():
    print("Attack on LaunchPad1")

def launchpad2():
    print("Attack on LaunchPad2")

def launchpad3():
    print("Attack on LaunchPad3")

exce = UriAttack(launchpad1)
exce()
print()
exce = UriAttack(launchpad2)
exce()
print()
exce = UriAttack(launchpad3)
exce()
print()
