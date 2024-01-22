def fact(n : int)-> int:
    f = 1
    if n == 0:
        return 1

    for i in range(1,n+1):
        f = f*i
    return f


per = fact(8)/(fact(5))
print("Possible ways : ", per)

