
"""
/*
Program 4: Write a Program to Print following Pattern.
a
A A 
a a a 
A A A A
a a a a a
*/

"""


for itr in range(5):
    for inner in range(itr+1):
        print("a " if itr%2==0 else "A ",end=" ")
    print("")    
