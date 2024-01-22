name = input("Enter name\n")
surname = input("Enter surname\n")

st = set(name).union(surname)

for i in st :
    print(i, end = " ")

print()
