from sys import argv
a=argv[1]
b=argv[2]
a=int(a)
b=int(b)
d1={3:"Raina",7:"Dhoni"}
c,d=d1.keys()
#print(type(a))
if(a==c and b==d):
    print(d1)
else:
    print("Not Equal")

