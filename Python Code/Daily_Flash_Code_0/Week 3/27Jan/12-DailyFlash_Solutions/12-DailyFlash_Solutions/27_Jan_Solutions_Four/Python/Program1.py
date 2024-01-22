'''
Problem Statement

Write a Program to print series of Even numbers ranging between two numbers entered by user.
'''

start = int(input("Enter start value\n"))
end = int(input("Enter end value\n"))

if start%2 != 0 :
    start = start + 1

print("Series of even numbers in the range is")
for x in range(start,end+1,2):
    print(x,end=" ")
print()
