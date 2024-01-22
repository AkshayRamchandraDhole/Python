food_at_wedding=(("Indian",'Fritters','Curry'),("Chinese","Chospy","Noodles"),("Amercian","Fires","Wraps"))
l1=list()
l2=list()
l3=list()
for i in range(len(food_at_wedding)):
    for j in range(len(food_at_wedding[i])):
        l1.append((food_at_wedding[i][0]))
        l2.append((food_at_wedding[i][1]))
        l3.append((food_at_wedding[i][2]))
        break 
print(tuple(l1),"\n",tuple(l2),"\n",tuple(l3))

