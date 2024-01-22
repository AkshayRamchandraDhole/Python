legacy = {7 : 'CSK', 3 : 'CSK', 13 : 'CSK', 45 : 'MI', 33 : 'MI', 99 : 'MI', 77 : 'DC', 41 : 'DC', 19 : 'DC'}

csk = set()
mi = set()
dc = set()

for i in legacy :

    if legacy[i] == 'CSK' :
        csk.add(i)

    elif legacy[i] == 'DC' :
        dc.add(i)

    else :
        mi.add(i)

print('csk = ', csk)
print('mi = ', mi)
print('dc = ', dc)
