

num = input("Enter the length : ")

sum1 = 0
def power(lower,upper):
    power = lower

    while upper!=0:
        power = power*lower
        upper = upper-1

    return power


while num!=0:

    sum1 = sum1 + power(num,num*num-1)
    num = num-1


print("Sum = "+str(sum1))
