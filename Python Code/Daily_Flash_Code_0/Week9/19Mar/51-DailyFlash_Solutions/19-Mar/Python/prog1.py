n = int(input())
m = 1
for i in range(1, n + 1):
    s = 0
    for j in range(1, i + 1):
        s += j
    m *= s
print(m)
