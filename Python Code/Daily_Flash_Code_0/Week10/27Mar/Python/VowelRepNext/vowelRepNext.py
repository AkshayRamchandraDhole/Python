s=input("Enter String:")
le=len(s)
'''for i in range(le):
    #if(s[i]=='A'or s[i]=='a' or s[i]=='i' or s[i]=='I' or s[i]=='o' or s[i]=='O' or s[i]=='e' or s[i]=='E' or s[i]=='u' or s[i]=='U'):
        s[i]=chr(ord(s[i]))
        s[i]=ord(s[i])
'''
for i in s:
    if(i=='A' or i=='a' or i=='i' or i=='I' or i=='o' or i=='O' or i=='e' or i=='E' or i=='u' or i=='U'):
        i=chr(ord(i)+1)
    print(i,end='')
print()        
