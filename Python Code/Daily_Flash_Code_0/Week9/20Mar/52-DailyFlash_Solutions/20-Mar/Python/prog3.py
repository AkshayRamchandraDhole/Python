import array
num = int(input())
arr = array.array("i", [])
while(num != 0):
    arr.append(num % 10)
    num = int(num / 10)
for i in arr:
    print(i, end = " ")
