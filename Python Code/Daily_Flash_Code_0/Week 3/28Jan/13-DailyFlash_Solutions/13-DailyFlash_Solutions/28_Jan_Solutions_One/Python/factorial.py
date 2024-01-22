
num1 = input("Enter the lowerlimit : ")
num2 = input("Enter the upperlimit : ")


for outer in range(num1,num2+1):
    fact =1
    for inner in range(1,outer+1):
        fact = fact*inner
    print("Factorial of "+str(outer)+" is "+str(fact))    
