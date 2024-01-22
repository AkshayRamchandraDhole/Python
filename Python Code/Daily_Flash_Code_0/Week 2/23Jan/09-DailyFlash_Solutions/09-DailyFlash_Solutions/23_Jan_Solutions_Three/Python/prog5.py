fact = 1
num1 = int(input("Input : "))
for i in range(num1):
    fact *= i + 1
print("Fact : ", fact) if num1 >= 0 else print("Enter valid num.")
