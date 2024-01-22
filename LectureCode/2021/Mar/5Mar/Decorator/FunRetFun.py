def IndVsEng():
    
    print("Ind Vs Eng Match")
    
    def stat():
        print("Bowling Chart")
        print("Batting Chart")
    
    def prize():
        print("Man Of The Match")
    return stat,prize

obj = IndVsEng()
print(type(obj))
for i in obj:
    i()
