AkolaTeams=[["Sangharsh","Gaurav","Akshay"],["Vishwashanti","Anil","Suraj"],["Spartan","Shubham","Dadu"]]
'''
print(AkolaTeams)

for i in AkolaTeams:
    print(i)

print(AkolaTeams[0][0])
print(AkolaTeams[1][0])
print(AkolaTeams[2][0])

'''
#using isinstance()

print("Using isinstance Method..")

for i in AkolaTeams:
    if(isinstance(i,list)):
        print(i)
        

