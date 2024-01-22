movie=["The Shawshank Redemption","Forrest Gump","The Godfather"]
directors=["Frank Darabont","Robert Zemeckis","Francis Ford Coppola"]
imdb=[9.3,8.8,9.2]
l1=list()
for i in range(len(movie)):
    tu=tuple((movie[i],directors[i],imdb[i]))
    l1.append(tu)
print(tuple(l1))
