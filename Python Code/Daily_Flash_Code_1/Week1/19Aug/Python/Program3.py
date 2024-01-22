marval=['Robert Downey Jr','Chris Hemsworth','Scarlett Johanssan','Ryan Reynolds']
dc=['Gal Gadot','Henry Cavil','Ezra Miller','Ryan Reynolds']
com=set()
for i in marval:
    if(i in dc):
        continue
    else:
        com.add(i)
for j in dc:
    if(j in marval):
        continue
    else:
        com.add(j)
print(com)
