name = "Shashi"

ls1 = list()

index = -1

for i in range(len(name)) :

    ls1.append(name[i:])
    ls1.append(name[ index : : -1])
    index -= 1

print(ls1)
