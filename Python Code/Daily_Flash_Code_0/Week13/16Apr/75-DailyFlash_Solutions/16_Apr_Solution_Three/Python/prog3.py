rows, cols = (3, 3)

arr = [[0 for i in range(cols)] for j in range(rows)] 


for i in range(3):
    for j in range(3):
        arr[i][j] = int(input())

for j in range(3):
    arr[0][j] = 2 * arr[0][j] + 3 * arr[1][j]
for j in range(3):
    arr[1][j] = 2 * arr[1][j] - arr[2][j]
for j in range(3):
    arr[2][j] *= 4;


for i in range(3):
    for j in range(3):
        print(arr[i][j], end=" ")
    print()
