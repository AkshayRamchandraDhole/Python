
n = int(input("Length of Array : "))
l = []
for i in range(0,n):
    l.append(int(input()))

print("before")
print(l)
print("After")

for i in range(0, len(l)//2):
    n = l[i]
    l[i] = l[len(l) - i - 1]
    l[len(l) - i - 1] = n

print(l)

