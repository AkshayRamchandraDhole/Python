actors = {'Hemsworth' : 'Australian', 'Jackman' : 'Australian', 'Holland' : 'British', 'Hiddleston' : 'British',
'Cumberbatch' : 'British', 'Evans' : 'American', 'RDJ' : 'American'}

marvel = {'Zoe' : 'F', 'Hemsworth' : 'M', 'Evans' : 'M', 'Holland' : 'M', 'Paltrow' : 'F', 'Jackman' : 'M',
'Hiddleston' : 'M', 'Cumberbatch' : 'M'}

non_american_male = set()

for i in marvel :

    if marvel[i] == 'M' :

        if actors[i] == "Australian" or actors[i] == "British" :
            non_american_male.add(i)

print(non_american_male)
