num1, num2, num3= [int(i) for i in input("Input : ").split()]
if(num1 >= num2 and num1 >= num3):
    print("Max : ", num1)
elif(num2 >= num3):
    print("Max : ", num2)
else:
    print("Max : ", num3)
