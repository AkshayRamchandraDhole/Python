"""
Program 4 : Write a Program to print First 50 Even Numbers
Output: 2 4 6 . . . 100
"""

print("First 50 even numbers")

for itr in range(101):
    if itr%2==0:
        print(itr)
