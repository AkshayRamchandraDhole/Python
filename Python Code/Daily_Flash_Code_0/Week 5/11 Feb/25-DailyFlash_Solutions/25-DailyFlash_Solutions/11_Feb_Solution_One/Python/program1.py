num = input("Enter the number")


sum1 = 0

for itr in range(1,(num/2)+1):
    if num%itr == 0:
        sum1 = sum1+itr


if sum1 <num:
    print("The number is deficient")
else :
    print("The number is not deficient")

