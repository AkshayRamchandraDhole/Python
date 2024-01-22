
l = int(input("Enter length of series  :\t"))
x = int(input("Enter Value of X  :\t"))
y = int(input("Enter Value of Y  :\t"))

lst = []
cnt = 0
x = x+y

for s in range(l) :

	cnt = cnt + (s/x**s)

print("Sum of ",l," elements of series is ",round(cnt,4))
