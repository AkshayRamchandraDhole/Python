def sqrt(n):

    x = n
    y = 1
    e = 0.0001

    while(x - y > e) :

        x = (x + y) / 2
        y = n / x

    print("Square root is %.2f" %x)

sqrt(int(input("Enter a number to find its Square root\n")))
