tup=("UK","US","France","China","Russia","US","UK")
s1=set()
for i in tup:
    if(tup.count(i)>=2):
        s1.add(i)
print(tuple(s1))
