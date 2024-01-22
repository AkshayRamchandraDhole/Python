def factorial(n) :

    n = int(n)
    mult = 1

    while(n >= 2) :
        mult *= n
        n -= 1

    return mult

def special(n) :

    sum = 0

    for i in n :
        sum += factorial(i)

    if str(sum) == n :
        return True

    else :
        return False

print('special') if special(input("Enter a number to find whether it is special\n")) else print('Not special')
