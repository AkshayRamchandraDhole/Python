l1 = list(input("Enter string1\n"))
l2 = list(input("Enter string2\n"))

l1.sort()
l2.sort()

s1 = str()
s2 = str()

for i in l1 :
    s1 += i

for i in l2 :
    s2 += i

print("anagram") if s1 == s2 else print("Not anagram")
