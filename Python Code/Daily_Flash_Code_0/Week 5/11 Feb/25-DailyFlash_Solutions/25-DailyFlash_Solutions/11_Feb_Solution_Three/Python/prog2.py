arr = input("Enter octal : ")
l = len(arr)
i = 0
dec = 0
while(True):
    if(i > l - 1):
        break
    num = ord(arr[i])- 48
    dec = dec * 8 + num
    i += 1
print("Decimal : ", dec)
