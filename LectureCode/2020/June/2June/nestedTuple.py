Akola=(("Kaulkhed","Shreyas"),("Malkapur","Akshay"),("Khadki","Krishna"),("Khadan","Amit"))
print(Akola)

for m in Akola:
    print(m)

print(Akola[0][1])      #Shreyas
print(Akola[1][1])      #Akshay
print(Akola[2][1])      #Krishna
print(Akola[3][1])      #Amit


for i in Akola:
    if(isinstance(i,tuple)):
        print(i)
