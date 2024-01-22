num = int(input())
i = 0
j = 0
while(num != 0):
    if((num % 10) % 2 == 1):
        i += 1
    else:
        j += 1
    num = int(num / 10)

print("odd : ", i, "\neven : ", j)
