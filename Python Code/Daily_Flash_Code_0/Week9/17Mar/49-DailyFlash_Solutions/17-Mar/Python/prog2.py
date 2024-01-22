num = int(input("Enter num : "))
temp = num
n1 = int(input("Enter n1 : "))
n2 = int(input("Enter n2 : "))
temp = num
cnt = 0
while(temp != 0):
    cnt += 1
    if(temp % 10 == n1):
        num = num + (n2 - n1) * pow(10, cnt - 1)
    temp = int(temp / 10)
print(num)
