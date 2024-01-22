actors = {'Hemsworth':'Australian','Jackman':'Australian','Holland':'British','Hiddleston':'British','Cumberbatch':'British','Evans':'Amercian'}
marval={'Zoe':'F','Hemsworth':'M','Evans':'M','Holland':'M','Paltrow':'F','Jackman':'M','Hiddleston':'M','Cumberbatch':'M'}
marval_actors=set()
for i in marval:
    if(marval[i]=='M' and actors[i]!='Amercian'):
        marval_actors.add(i)
print(marval_actors)

