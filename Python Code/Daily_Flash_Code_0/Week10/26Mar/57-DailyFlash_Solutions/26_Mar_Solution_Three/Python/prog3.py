import array
n = int(input())
arr = array.array("i", [])
j = 0
while(j < n):
    num = int(input())
    arr.append(num)
    j+=1
temp = arr[n - 1]
arr[n - 1] = arr[0]
arr[0] = temp

for i in range(len(arr)): 
    temp = arr[n - 1 - i]
    arr[n - 1 - i] = arr[i]
    arr[i] = temp
for i in arr:
    print(i, end = "")
