num1, num2, num3= [int(i) for i in input("Input : ").split()]
if(num1 <= num2 and num1 <= num3):
    print("Min : ", num1)
elif(num2 <= num3):
    print("Min : ", num2)
else:
    print("Min : ", num3)
