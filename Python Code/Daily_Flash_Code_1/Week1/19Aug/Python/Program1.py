egacy={7:'CSK',3:'CSK',13:'CSK',45:'MI',33:'MI',99:'MI',77:'DC',41:'DC',19:'DC'}
csk=set()
mi=set()
dc=set()
for i in egacy:
    if(egacy[i]=='CSK'):
        csk.add(i)
    elif(egacy[i]=='MI'):
        mi.add(i)
    elif(egacy[i]=='DC'):
        dc.add(i)
print("MI:",mi)
print("CSK:",csk)
print("DC:",dc)

