
try:
	print("Enter Numbers")
	a = int(input())
	b = int(input())
except ValueError as e:
	exit(0)
	pass

print("Before Swap :")
print("a : ", a)
print("b : ", b)

a = a + b
b = a - b	
a = a - b
	
print("After Swap :")
print("a : ", a)
print("b : ", b)

