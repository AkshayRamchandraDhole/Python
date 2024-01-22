import array
num = int(input())
arr = array.array("i", [])
while(num != 0):
    arr.append(num % 10)
    num = int(num / 10)
s = 0
for i in arr:
    s += i
print("sum =", s)
print("avg =", s/len(arr))
