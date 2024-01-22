def fact(num):
    fact = 1
    while(num > 0):
        fact*=num
        num-=1
    return fact
#x = int(input("Enter Num : "))
#print(fact(x))
print(fact(int(input("Enter Num : "))))
