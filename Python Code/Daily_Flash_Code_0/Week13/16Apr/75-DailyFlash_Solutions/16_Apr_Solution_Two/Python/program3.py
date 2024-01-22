
arr = list()
m = 3
n = 3

print("Enter Matrix 1:")
for i in range(0,m):
    arr.append([])
    for j in range(0,n):
        arr[i].append(int(input()))

for i in range(0,n):
        arr[0][i] = 2 * arr[0][i] + 3 * arr[1][i]
        arr[1][i] = 2 * arr[1][i] - arr[2][i]
        arr[2][i] = 4 * arr[2][i]

print("Matrix : ")
print(arr)
