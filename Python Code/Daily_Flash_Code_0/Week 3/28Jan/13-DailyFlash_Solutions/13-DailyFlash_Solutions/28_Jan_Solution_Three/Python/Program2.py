'''
Problem Statement

Write a Program that accepts Two integers from user and prints the series of factorial of all numbers between those two inputs
A factorial is calculated by multiplying all the numbers including the number itself till 1
Example Factorial of 4 = 4*3*2*1 = 24
'''

start = int(input("Enter start value\n"))
end = int(input("Enter end value\n"))

print("Series of Factorial of numbers in the range is")
for x in range(start,end+1):
    fact = 1
    for y in range (1,x+1):
        fact = fact * y
    print("Factorial of ",x," : ",fact)
