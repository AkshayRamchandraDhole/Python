
arr = list()
m = 3
n = 3

print("Enter Matrix 1:")
for i in range(0,m):
    arr.append([])
    for j in range(0,n):
        arr[i].append(int(input()))

for i in range(0,n):
        arr[i][2] = 2 * arr[i][2] + 3 * arr[i][1]
        arr[i][1] = 3 * arr[i][1] - arr[i][0]
        arr[i][2] = 3 * arr[i][2]

print("Matrix : ")
print(arr)
