

num = input("Enter the number : ")

rem = 0
count = 0


while num!=0:
    rem = num % 10

    if rem%2==0:
        count = count + 1


    num = num/10


print(count)
