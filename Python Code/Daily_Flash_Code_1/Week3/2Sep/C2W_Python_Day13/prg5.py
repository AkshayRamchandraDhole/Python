def spy(n) :

    sum = 0
    mult = 1

    for i in n:

        sum += int(i)
        mult *= int(i)

    if sum == mult :
        return True 

    else:
         return False

print("Spy") if spy(input("Enter a number to check whether it is spy\n")) else print("Not spy")
