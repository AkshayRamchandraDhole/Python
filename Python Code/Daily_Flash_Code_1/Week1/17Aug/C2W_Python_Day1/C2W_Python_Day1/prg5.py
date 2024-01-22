import sys

name = input("Enter your name please\n")

if len(name) == 0:
        sys.exit(0)

print("My--name--is--", end = "")

for i in name :

    if(i == " ") :
        print("--", end = "")

    else :
        print(i, end = "")

print()
