"""
Program 1: Write a Program to Print following Pattern
1
2 2 
3 3 3
4 4 4 4

"""


for outer in range(1,5):
    for inner in range(1,outer+1):
        print(outer,end=" ")
    print(" ")    
