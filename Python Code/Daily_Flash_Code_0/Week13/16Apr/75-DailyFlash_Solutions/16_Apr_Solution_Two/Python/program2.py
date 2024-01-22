
st = input("Enter String : ")

for i in range(0,len(st)):
    if(ord(st[i]) >= 97 and ord(st[i])<=122):
        st = st.replace(st[i],chr(ord(st[i]) - 32))
    elif(ord(st[i]) >= 65 and ord(st[i])<=90):
        st = st.replace(st[i],chr(ord(st[i]) + 32))

print(st)
