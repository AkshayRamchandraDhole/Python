rows, cols = (3, 3)

arr = [[0 for i in range(cols)] for j in range(rows)] 


for i in range(3):
    for j in range(3):
        arr[i][j] = int(input())

for j in range(3):
    arr[j][2] = 2 * arr[j][2] + 3 * arr[j][1]
for j in range(3):
    arr[j][1] = 3 * arr[j][1] - arr[j][0]
for j in range(3):
    arr[j][2] *= 3;


for i in range(3):
    for j in range(3):
        print(arr[i][j], end=" ")
    print()
