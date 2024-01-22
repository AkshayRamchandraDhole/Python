
n = int(input("Length of Array : "))
l = []
sum = 0
for i in range(0,n):
    l.append(int(input()))

print("before")
print(l)
l[0] = l[0] + l[n-1]
l[n-1] = l[0] - l[n-1]
l[0] = l[0] - l[n-1]
print("After")
print(l)

