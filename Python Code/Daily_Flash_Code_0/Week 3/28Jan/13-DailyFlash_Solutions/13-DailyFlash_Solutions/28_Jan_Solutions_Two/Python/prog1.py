num = int(input("Num : "))
sum = 0
for i in range(1, int(num / 2) + 1):
    if(num % i == 0):
        sum += i;
print("Perfect") if sum == num and num > 0 else print("Not perfect")
