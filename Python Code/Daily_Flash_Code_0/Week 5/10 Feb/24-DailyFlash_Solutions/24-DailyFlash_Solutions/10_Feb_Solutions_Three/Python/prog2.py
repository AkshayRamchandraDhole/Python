from array import *

arr = input("Enter octal num : ")
b = array('i', [])
for i in range(3):
    b.append(0)
l = len(arr);
for i in range(l):
    n = ord(arr[i]) - 48
    k = 0
    b[2] = 0
    b[1] = 0
    b[0] = 0
    while(n != 0):
            rem = n % 2
            b[k] = rem
            k += 1
            n = int(n / 2)
    print(b[2],b[1],b[0], end = " ");	
