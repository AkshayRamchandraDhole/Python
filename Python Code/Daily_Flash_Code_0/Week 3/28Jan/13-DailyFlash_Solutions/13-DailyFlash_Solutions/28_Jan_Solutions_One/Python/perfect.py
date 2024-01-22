
num1 = input("Enter the number : ")

sum1 = 0

for itr in range(1,(num1/2)+1):
    if num1%itr == 0:
        sum1 = sum1 + itr

if sum1 == num1:
    print(str(num1)+" is Perfect number")
else:
    print(str(num1)+" is not Perfect number")
