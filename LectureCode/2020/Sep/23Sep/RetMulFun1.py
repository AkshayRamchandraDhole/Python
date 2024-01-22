def IPL(str1,str2,str3):
    def MI():
        print("MI Sponosor = ",str1)
    def RCB():
        print("RCB Sponosor = ",str2)
    def DC():
        print("DC Sponosor = ",str3)
    return MI,RCB,DC
spTpl = IPL("Jio","PlayBold","JSW")
type(spTpl)
for sp in spTpl:
    #print(sp())
    sp()


