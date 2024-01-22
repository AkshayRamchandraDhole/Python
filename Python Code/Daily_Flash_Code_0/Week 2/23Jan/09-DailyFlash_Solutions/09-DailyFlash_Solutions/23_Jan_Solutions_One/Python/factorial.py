"""
/*Program 5: Write a C program to calculate the factorial of a given number.
Input: 5
Output:
The Factorial of 5 is: 120*/
"""

num = 5

fact = 1

for itr in range(2,num+1):
    fact = fact*itr
 
print("The Factorial of 5 is "+str(fact)) 


