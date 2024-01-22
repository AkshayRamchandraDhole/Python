'''
Problem Statement

Write a Program to Print following Pattern.

7
7 6 
6 5 4
4 3 2 1
'''

n = 7
for x in range(4,0,-1):
    for y in range(x-1,4):
        print(n,end="\t")
        n = n - 1
    n = n + 1
    print()
