st=input("Enter String:")
inx=int(input("Enter index to remove character at:"))
newst=""
for i in range(0,len(st)):
    if(i!=inx):
        newst=newst+st[i]
print(newst)

