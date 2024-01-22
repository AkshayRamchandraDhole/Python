import random
def ludoDie():
    ch="yes"
    while(ch=="yes" or ch=="y"):
        print(random.randint(1,6))
        ch=input("Do u want to play ludo (yes/no):")
ludoDie()


    
