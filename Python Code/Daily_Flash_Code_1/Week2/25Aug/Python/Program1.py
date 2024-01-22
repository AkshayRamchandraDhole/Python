gloves=[35,30,25,40,50,20]
masks=[50,60,30,70,40,90]
count=0
for i in gloves:
    su=0
    for j in masks:
        su=i+j
        if(su>90):
            continue
        else:
            print(su,end=" ")
            count+=1
    if(count==36):
        break
    print()




