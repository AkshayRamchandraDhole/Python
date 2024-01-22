'''
Problem Statement

Write a Program to Print following Pattern.
1	
8	27	
64	125	216	
343	512	729	1000	
'''

rows = int(input("Enter number of rows\n"))
num = 1

for x in range(rows):
    for y in range(x+1):
        print(num*num*num,end="\t")
        num = num + 1
    print()
