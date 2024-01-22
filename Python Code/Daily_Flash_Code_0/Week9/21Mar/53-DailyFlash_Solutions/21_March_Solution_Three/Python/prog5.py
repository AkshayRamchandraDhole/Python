import array
import math
num = int(input())
s = 0
arr = array.array("i", []);
for i in range(num):
    n = int(input())
    s += n
    arr.append(n);
    
avg = s / len(arr)
s = 0
for i in arr:
    s += (avg - i) * (avg - i)
print(s / len(arr))
print(math.sqrt(s / len(arr)))
