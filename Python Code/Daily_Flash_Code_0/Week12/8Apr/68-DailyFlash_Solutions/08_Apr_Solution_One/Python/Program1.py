st = input("Enter the string : ")

ch = input("Enter a Sub-String : ")

l = len(ch)

for x in range(len(st)) :

    if ch == st[x:l+x]:
        print("Present")


