
try:
	print("Enter Numbers")
	a = int(input())
	b = int(input())
	c = int(input())
except ValueError as e:
	exit(0)
	pass

if a >= b:
    if a >= c:
        print(a, "is maximum")
    else:
        print(c, "is maximum")
elif b >= c:
        print(b, "is maximum")
else:
    print(c, "is maximum")


