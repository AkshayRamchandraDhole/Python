n = int(input())
m = 0
for i in range(1, n + 1):
        m += pow(i, i) * (i - 1)
print(m)
