from sys import argv

for i in range(1, len(argv)):
    print(chr(int(argv[i])), end = "")

print()
