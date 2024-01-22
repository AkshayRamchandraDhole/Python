s1 = input("Enter string1\n")
s2 = input("Enter string2\n")

n = len(s1) if len(s1) >= len(s2) else len(s2)
flag = 0 #to raise it to 1, if string is unequal

for i in range(n):

    if i == len(s2) :
        flag = 1
        print(ord(s1[i]) - 0)
        break

    elif i == len(s1) :
        flag = 1
        print(0 - ord(s2[i]))
        break

    elif s1[i] != s2[i] :
        flag = 1
        print(ord(s1[i]) - ord(s2[i]))
        break

if flag == 0 :
    print("Strings are equal")
