infinity_war_cast=("Ruffalo","Holland","Brolin","RDJ","Evans","Cumberbatch","Hemswarth")
deadpool_2_cast=["Brolin","Reynolds","Karan Soni","Matt Damon"]
com=set()
for i in infinity_war_cast:
    if(i in deadpool_2_cast):
        continue
    else:
        com.add(i)
print(com)

