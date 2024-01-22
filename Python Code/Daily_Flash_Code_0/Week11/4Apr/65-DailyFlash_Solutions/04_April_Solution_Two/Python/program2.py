
s = input("Enter String : ")
cnt = 0
a = e = k = o = u = 0
for i in range(0, len(s)):
    ch = s[i]
    if(ch == 'A' or ch == 'a'):
        a+=1
    elif(ch == 'e' or ch == 'E'):
        e+=1
    elif(ch == 'I' or ch == 'i'):
        k+=1
    elif(ch == 'O' or ch == 'o'):
        k+=1
    elif(ch == 'U' or ch == 'u'):
        u+=1
print("a : ", a)
print("e : ", e)
print("i : ", k)
print("o : ", o)
print("u : ", u)
