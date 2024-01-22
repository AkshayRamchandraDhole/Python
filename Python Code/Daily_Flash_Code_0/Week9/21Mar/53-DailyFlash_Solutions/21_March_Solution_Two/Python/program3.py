
n = int(input("Length of Array : "))
l = []
sum = 0
for i in range(0,n):
    l.append(int(input()))
    sum = sum + l[i]

print("Sum : ", sum)
print("Avg : ", sum/n)
