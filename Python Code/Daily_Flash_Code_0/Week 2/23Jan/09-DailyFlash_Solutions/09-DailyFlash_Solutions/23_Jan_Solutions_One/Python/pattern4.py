"""
/*Program 4: Write a Program to Print following Pattern
*
* *
* * * 
* * * * 
*/
"""


for outer in range(1,5):
    for inner in range(1,outer+1):
        print("*",end=" ")
    print(" ")    
