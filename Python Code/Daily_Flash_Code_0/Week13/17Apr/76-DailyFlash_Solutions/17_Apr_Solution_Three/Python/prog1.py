str1 = input()

str2 = input()

m = min(len(str1), len(str2))
flag = 0
for i in range(m):
    if(str1[i] != str2[i]):
        print(ord(str1[i]) - ord(str2[i]))
        flag = 1
        break
if(flag == 0):
    print("Equal")
