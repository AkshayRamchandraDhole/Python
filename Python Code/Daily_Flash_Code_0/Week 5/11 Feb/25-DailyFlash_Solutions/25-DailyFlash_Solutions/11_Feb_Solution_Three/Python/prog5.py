num = int(input())
i = 0
while(num != 0):
    if((num % 10) % 2 == 0):
        i += 1
    num = int(num / 10)

print("no of even digits : ", i)
