auction={'Watson':'CSK','Raina':'CSK','Dhoni':'CSK','Rohit':'MI','Malinga':'MI','Pandya':'MI'}
MI=[]
CSK=[]
for i in auction.keys():
    if(auction[i]=='MI'):
        MI.append(i)
    elif(auction[i]=='CSK'):
        CSK.append(i)
print("MI=",MI)
print("CSK=",CSK)


