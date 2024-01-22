
import math
n = int(input("Enter len "))
arr = list()
k = list()
print("Array 1 : ")
for i in range(0,n):
    arr.append(int(input()))
print("Array 2 : ")
for i in range(0,n):
    k.append(int(input()))
    if(k[i] > arr[i]):
        k[i]  = k[i] - arr[i]
    else:
        k[i]  = arr[i] - k[i]
print(k)

