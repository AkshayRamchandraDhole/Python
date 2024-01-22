
s = input("Enter String : ")
c = input('Enter Character : ')
cnt = 0
for i in range(0,len(s)):
    if(c[0] == s[i]):
        cnt+=1;

print("Occurrence : " , cnt)


