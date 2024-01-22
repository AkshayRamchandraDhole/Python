from math import sqrt

def pronic(n) :

    for i in range(int(sqrt(n) + 1)) :

        if i * (i + 1) == n :
            return True

    return False

print('Pronic') if pronic(int(input("Enter number\n"))) else print('Not pronic')
