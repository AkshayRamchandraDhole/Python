
num = input("Enter the number : ")

rem = 0 
sum1= 0

while num!=0:
    rem = num%10
    sum1= sum1+rem

    num= num/10


print("Sum of the digits "+str(sum1))    
