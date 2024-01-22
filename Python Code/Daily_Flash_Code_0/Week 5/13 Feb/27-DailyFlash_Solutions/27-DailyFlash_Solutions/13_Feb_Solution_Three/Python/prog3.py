num = int(input("Num : "))
temp = num
s = 0
while(temp > 0):
    rem = temp % 10;
    s += rem
    temp = int(temp / 10)
print("Sum : ", s)
