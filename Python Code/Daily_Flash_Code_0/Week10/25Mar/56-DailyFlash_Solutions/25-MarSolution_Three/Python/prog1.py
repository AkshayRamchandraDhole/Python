import math
n = int(input())
x = int(input())
y = int(input())
m = 0
for i in range(1, n + 1):
        m += (i)/pow(x + y, i)
print(m)
