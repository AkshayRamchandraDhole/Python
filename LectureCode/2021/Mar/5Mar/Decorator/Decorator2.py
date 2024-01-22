def UriAttack(launchpad):

    def plan():
        print("Meeting with Ajit Doval")
        launchpad()
        print("Handle Casualty")
        print("Yeh Naya India Hai")
    return plan
@UriAttack
def launchpad1():
    print("Attack on LaunchPad1")

@UriAttack
def launchpad2():
    print("Attack on LaunchPad2")

@UriAttack
def launchpad3():
    print("Attack on LaunchPad3")

launchpad1()
print()
launchpad2()
print()
launchpad3()
print()
'''
exce = UriAttack(launchpad1)
exce()
print()
exce = UriAttack(launchpad2)
exce()
print()
exce = UriAttack(launchpad3)
exce()
print()
'''
