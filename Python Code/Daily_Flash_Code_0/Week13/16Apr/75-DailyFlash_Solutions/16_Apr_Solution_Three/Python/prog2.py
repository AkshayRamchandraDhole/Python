
st = input("Enter String : ")

str1=""
for i in st:
    if(i >='A' and i <= 'Z'):

        ch = ord(i)+32;
        str1+=chr(ch)
    elif(i>='a'and i<='z'):
        ch = ord(i)-32;
        str1+=chr(ch)

print(str1)


