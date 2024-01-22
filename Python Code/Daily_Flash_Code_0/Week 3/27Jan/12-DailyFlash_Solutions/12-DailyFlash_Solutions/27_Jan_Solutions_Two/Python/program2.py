
try:
	print("Enter Numbers")
	a = int(input())
	b = int(input())
except ValueError as e:
	exit(0)
	pass


print(a, "is minimum than" , b) if a <= b  else print(b, "is minimum than" , a)
