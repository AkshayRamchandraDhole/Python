meals={'Panner':'Veg','Muttan Karma':'Non-Veg','Chicken Malai':'Non-Veg','Tandoori roti':'Veg','Drumstick':'Non-Veg'}
iWD=int(input("Hey What number of weekdays it is ? :"))
VegCount=0
NonCount=0
if(iWD%2==0):
    for i in meals:
        if(meals[i]=='Veg'):
            VegCount+=1
    print("My Friend Eats:",VegCount)
else:
    for i in meals:
        if(meals[i]=='Veg' or meals[i]=='Non-Veg'):
            NonCount+=1
    print("My Friend Eats:",NonCount)



