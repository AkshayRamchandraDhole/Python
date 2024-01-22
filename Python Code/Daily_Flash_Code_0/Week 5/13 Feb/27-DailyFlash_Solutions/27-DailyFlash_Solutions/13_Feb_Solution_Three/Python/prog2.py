h = input("Hex : ")
l = len(h)
for i in h:
    if(not((i >= '0' and i <= '9') or (i >= 'A' and i <= 'F'))):
        print("Enter correct hex")
        exit(1)
i = 0
d = 0
while(l > 0):
    if(h[i] <= '9'):
        num = ord(h[i]) - 48
    else:
        num = ord(h[i]) - 55
    d = d * 16 + num
    i += 1
    l -= 1
print("dec : ", d)
