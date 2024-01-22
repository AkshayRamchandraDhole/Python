import random
st=input("Enter String:")
l=list()
it=-1
l.append(st)
for i in range(1,len(st)):
    l.append(st[i:])
    l.append(st[it :: -1])
    it-=1
print(l)


