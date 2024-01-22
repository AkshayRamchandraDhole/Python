meals = {'Panner' : 'Veg', 'Mutton Korma' : 'Non veg', 'Chicken malai' : 'Non veg', 'Tandoori roti' : 'Veg', 'Drumsticks' : 'Non Veg'}

weekday_no = int(input("Hey what number of weekday it is?\n"))

count = int()

if weekday_no % 2 == 1:
    count = len(meals)

else :
    for i in meals :
        if meals[i] == 'Veg':
                count += 1

print('My friend can eat', count, 'dishes')
