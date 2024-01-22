'''
Problem Statement

Write a Program that calculates addition of two complex numbers.
'''

num1_r = int(input("Enter Real part of Num1 \n"))
num1_i = int(input("Enter Imaginary part of Num1 \n"))
num2_r = int(input("Enter Real part of Num2 \n"))
num2_i = int(input("Enter Imaginary part of Num2 \n"))

if num1_i < 0:

    num1_r = -num1_r
    num1_i = -num1_i

if num2_i < 0 :

    num2_r = -num2_r
    num2_i = -num2_i

print("The Addition of Complex Numbers ",num1_r,"+",num1_i,"i and ",num2_r,"+",num2_i,"i is",end = " ")
print((num1_r+num2_r),"+",(num1_i+num2_i),"i")
