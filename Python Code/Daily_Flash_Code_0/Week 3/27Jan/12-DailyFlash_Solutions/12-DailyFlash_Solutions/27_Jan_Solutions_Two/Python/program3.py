
try:
    print("Enter Distance in mt and time in sec ")
    a = int(input())
    b = int(input())
    if a < 0 or b < 0:
        raise ValueError
except ValueError as e:
    print("Wrong input")
    exit(0)
    pass

print("The Velocity of a particle roaming in space is" , round(a/b, 2) , "m/s")
