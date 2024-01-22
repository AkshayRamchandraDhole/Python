x=65
for i in range(4):
    c=0
    for j in range(4,i,-1):
        print(chr(x),end=' ')
        c+=1
        x+=c
    print()
    x-=c