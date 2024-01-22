'''
Problem Statement

Write a Program to Print following Pattern.

3
2 3 
1 2 3
0 1 2 3
'''

rows = int(input("Enter number of rows\n"))

for x in range((rows-1),-1,-1):
    for y in range(x,rows):
        print(y,end="\t")
    print()
