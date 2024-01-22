st1 = input("Enter a String 1\t :")
st2 = input("Enter a String 2\t :")

def strcmp(st1,st2):

    if len(st1) != len(st2) :
        return -1 
    else :
        for x in range(len(st1)) :

            if st1[x] != st2[x] :

                return ord(st1[x]) - ord(st2[x])

    return 0

cpm = strcmp(st1,st2)

if cpm != 0 or cpm == -1 :

    print("Strings are Unequal and Differ by ",cpm)

else :

    print("Strings are Equal")
