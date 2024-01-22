"""/*Program 3: Write a Program to print Cubes and Squares of all Odd numbers
ranges between given input number.
Input: 10
Output:
Cube of 1 : 1 and Square of 1 :1
Cube of 3 : 27 and Square of 3 :9
.
.
Cube of 9 : 729 and Square of 9 : 81
*/"""


num = int(input("Enter the number "))

for itr in range(1,num+1):
    if itr%2==0:
        print("Cube of "+str(itr)+" : "+str(itr*itr*itr)+" Square of "+str(itr)+" : "+str(itr*itr))
