st="Core2Web"
for i in range(3):
    for j in range(8):
        if(i==0 and j==0):
            print("/",end="")
        if(i==1 and  j==0):
            print("(",end="")
        if(i==1):
            print(st[j],end="")
            print("|",end="")
        elif(i==2):
            print("\_/",end="")
        else:
            print("\/",end="")
    print()
