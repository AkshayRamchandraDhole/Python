"""
/*
Program 1: Write a Program to print series of odd numbers ranging between
two numbers entered by user.
Input:
Min of Series : 4
Max of Series: 60
Output: Series Of Odd Numbers Ranging between 4 & 60 is:
5, 7, 9, . . ., 59
*/

"""


lowerlimit = input("Min of Series : ")
upperlimit = input("Max of Series : ")

for itr in range(lowerlimit,upperlimit):
    if itr%2!=0:
        print(itr)
