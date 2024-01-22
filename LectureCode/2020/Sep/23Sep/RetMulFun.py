def BCCI(str1,str2,str3):

    def teamIndia():
        print("Team India Sponsore = ",str1)
    def IPL():
        print("IPL Sponsore = ",str2)
    def RanjiTrophy():
        print("Ranji Sponsore = ",str3)
    return teamIndia,IPL,RanjiTrophy
retTpl = BCCI("Byjus","Dream11","Paytm")
for sponosor in retTpl:
    sponosor()
