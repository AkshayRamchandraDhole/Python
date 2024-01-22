
print("Enter Numbers : ")
while 1 :
    n = int(input())
    rev = 0
    temp = n
    sum = 0
    while(n != 0):
        fact = 1
        for i in range(1, n%10 + 1):
            fact = fact * i
        if(n%10 == 0):
            fact = 1
        sum += fact
        n //= 10
    if(temp != sum):
        print(temp)
    else:
        break

