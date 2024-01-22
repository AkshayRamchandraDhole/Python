def sqrt(num):
    sq=num // 2
    temp=0
    while(sq != temp):
        temp=sq
        sq=(num/temp + temp) / 2
    print("Square Root of",num,"is",sq)
num=int(input("Enter Number:"))
sqrt(num)
