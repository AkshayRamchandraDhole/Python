

num1 = input("Enter the number 1 : ")
num2 = input("Enter the number 2 : ")

print("before Swapping num1 = "+str(num1)+" and num2 = "+str(num2))

num1 = num1+num2
num2 = num1-num2
num1 = num1-num2
print("After Swapping num1 = "+str(num1)+" and num2 = "+str(num2))
