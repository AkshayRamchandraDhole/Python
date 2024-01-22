
s = input("Enter String : ")
for i in range(0,len(s)):
    if((s[i] == 'A' or s[i] == 'a' or s[i] == 'E' or s[i] == 'e' or s[i] == 'I' or s[i] == 'i' or s[i] == 'o' or s[i] == 'O' or s[i] == 'u' or s[i] == 'U') and(s[i-1] == 'A' or s[i-1] == 'a' or s[i-1] == 'E' or s[i-1] == 'e' or s[i-1] == 'I' or s[i-1] == 'i' or s[i-1] == 'o' or s[i-1] == 'O' or s[i-1] == 'u' or s[i-1] == 'U')):
        print(s[i-1],s[i])
		



