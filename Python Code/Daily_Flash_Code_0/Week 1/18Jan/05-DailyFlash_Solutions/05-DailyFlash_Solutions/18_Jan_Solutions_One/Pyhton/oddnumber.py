"""

Program 3 : Write a Program to print First 50 Odd Numbers .
Output: 1 3 5 . . . 99

"""

print("First 50 odd numbers")

for itr in range(1,100):
    if itr%2!=0:
        print(itr)
