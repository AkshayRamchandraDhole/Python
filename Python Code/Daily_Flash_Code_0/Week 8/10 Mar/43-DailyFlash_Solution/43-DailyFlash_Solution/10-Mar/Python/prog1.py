num = int(input("Enter num : "))
temp = num
cnt = 0
while(temp != 0):
    temp = int(temp / 10)
    cnt += 1
sqr = 0
temp = num * num
while(cnt > 0):
    sqr = sqr * 10 + temp % 10
    temp = int(temp / 10)
    cnt -= 1
rev = 0
while(sqr != 0):
    rev = rev * 10 + sqr % 10
    sqr = int(sqr / 10)
if(rev == num):
    print("Automorphic")
else:
    print("Non automorphic")
