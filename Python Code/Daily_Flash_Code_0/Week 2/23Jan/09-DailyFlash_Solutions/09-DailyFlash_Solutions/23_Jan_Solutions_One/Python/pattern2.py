"""
/*Program 2: Write a Program to Print following Pattern
1
2 3
4 5 6
7 8 9 10
*/

"""

num = 1

for outer in range(1,5):
    for inner in range(1,outer+1):
        print(num,end=" ")
        num = num +1
    print(" ")    
