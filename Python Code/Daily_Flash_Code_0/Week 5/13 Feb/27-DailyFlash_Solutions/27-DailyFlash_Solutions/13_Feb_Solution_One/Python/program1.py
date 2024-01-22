

num = input("Enter the number : ")

rem = 0
sum1 = 0
fact = 1
temp = num

while num!=0:
    rem = num%10
    fact =1
    for itr in range(2,rem+1):
        fact = fact*itr

    sum1 = sum1+fact
    num = num/10

if sum1==temp:
    print("The number is Strong number")
else:
    print("The number is not Strong")

