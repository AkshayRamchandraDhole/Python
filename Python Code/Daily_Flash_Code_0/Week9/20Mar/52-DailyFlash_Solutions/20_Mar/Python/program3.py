
n = input("Enter Number : ")
l = list()
k = 0
for i in n:
    l.append(ord(n[k])- ord('0'))
    k+=1

print(l)
