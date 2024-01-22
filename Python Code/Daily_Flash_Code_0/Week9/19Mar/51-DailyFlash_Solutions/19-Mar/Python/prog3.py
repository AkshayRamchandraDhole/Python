import array
num = int(input())
rev = 0
while(num != 0):
    rev = rev * 10 + num % 10
    num = int(num / 10)
arr = array.array("i", [])
while(rev != 0):
    arr.append(rev % 10)
    rev = int(rev / 10)
for i in arr:
    print(i, end = " ")
