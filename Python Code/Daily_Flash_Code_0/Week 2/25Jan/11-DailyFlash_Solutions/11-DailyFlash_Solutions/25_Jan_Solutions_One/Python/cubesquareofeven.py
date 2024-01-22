"""/*
Program 3: Write a Program to print Cubes and Squares of all Even numbers
ranges between given input number.
Input: 10
Output:
Cube of 2 : 8 and Square of 2 : 4
Cube of 4 : 64 and Square of 4 : 16
.
.
Cube of 10 : 1000 and Square of 10 : 100

*/

"""


range1 = input("Enter the number : ")

for itr in range(1,range1):
    if itr % 2 == 0:
        print("Cube of "+str(itr)+" : "+str(itr*itr*itr)+" and Square of"+str(itr)+" : "+str(itr*itr))
