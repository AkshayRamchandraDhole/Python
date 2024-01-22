from sys import argv
a=argv[0]
b=argv[1]
c=argv[2]
d=argv[3]
e=argv[4]
for i in range(1,len(argv)):
    print(chr(int(argv[i])),end="")
print()

