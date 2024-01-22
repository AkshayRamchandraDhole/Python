
print("Enter Number : ")
fact = 1
while(True) :
    n = int(input())
    if(n < 0):
        break
    fact = 1
    for i in range(1, n+1):
        fact *= i
    print("factorial of ", n, " : ", fact)
print("You entered a negative number")

