'''
Write a Program that calculates the Greatest Common Divisor of
two entered numbers.
'''
a = int(input("Enter the First Value a: "))
b = int(input("Enter the Second Value b: "))

i = 1
while(i <= a and i <= b):
    if(a % i == 0 and b % i == 0):
        gcd = i
    i = i + 1
    
print("The GCD of",a,"and",b,"=",gcd)
        
