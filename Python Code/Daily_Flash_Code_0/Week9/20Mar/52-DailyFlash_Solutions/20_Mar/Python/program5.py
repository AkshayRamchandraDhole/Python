
import math
n = int(input("Total Number : "))
l = []
sum = 0
for i in range(1,n+1):
    k = int(input())
    l.append(k)
    sum+=k

sum = sum // n
var = 0
for i in l:
    var = var + math.pow(sum - i,2)
print("variance : ", var // n)

