auction = {'Watson' : 'CSK', 'Raina' : 'CSK', 'Dhoni' : 'CSK', 'Rohit' : 'MI', 'Malinga' : 'MI', 'Pandya' : 'MI'}

CSK = list()
MI = list()

for i in auction :

    if auction[i] == 'CSK' :
        CSK.append(i)

    else :
        MI.append(i)

print('CSK = ', CSK)
print('MI = ', MI) 
