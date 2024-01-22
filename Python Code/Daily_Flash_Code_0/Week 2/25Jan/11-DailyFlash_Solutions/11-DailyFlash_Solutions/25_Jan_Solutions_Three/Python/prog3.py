num1, num2 = [int(i) for i in input("Input : ").split()]
for i in range(num1, num2 + 1):
    print("Sqr of ", i ," : ", i * i,"\ncube of ", i, " : ", i * i * i, "\n") if i % 2 == 0 else print("", end = "")
