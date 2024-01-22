
import math
n = int(input("Enter len "))
arr = list()

for i in range(0,n):
    arr.append(int(input()))

s = 0
avg = sum(arr)/n
for  i in range(0,n):
    s += (arr[i] - avg)*(arr[i]*avg)

var = s/n
sd = math.sqrt(var)
print("Avg : ", avg)
print("Var : ", var)
print("SD : ", sd)

