'''
Problem Statement

Write a Program which detects whether the entered number is perfect or not
 
A Perfect number is a number which is equal to the sum of its Perfect divisor
A perfect divisor of x is the number giving remainder 0 on dividing x by number, where number != x
'''

num = int(input("Enter a Number\n"))
sum = 0

for x in range(1,num):
    if num % x == 0 :
        sum = sum + x


if sum == num :
    print("Entered Number is a Perfect Number")
else:
    print("Entered Number is not a Perfect Number")
