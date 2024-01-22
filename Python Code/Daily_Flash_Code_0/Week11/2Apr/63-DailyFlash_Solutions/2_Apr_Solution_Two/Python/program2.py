
s = input("Enter String : ")
k = s.split()
m = k[0]
min = len(k[0])
for i in range(0, len(k)):
    if(min > len(k[i])):
        min = len(k[i])
        m = k[i]

print(m)
