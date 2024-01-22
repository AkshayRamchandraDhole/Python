num = int(input("Num : "))
temp = num
s = 0
while(temp > 0):
    rem = temp % 10;
    fact = 1
    for i in range(1, rem + 1):
        fact *= i
    s += fact
    temp = int(temp / 10)
if(s == num):
    print("Strong")
else:
    print("not strong")
