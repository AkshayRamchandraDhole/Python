'''
Write a Program to that prints series of Even numbers in reverse
order from the limiting number entered by user.
'''


num=int(input("Enter the number:"))

for x in range(num,-1,-1):

    if(x % 2 == 0):

        print(x,end=" ")


print()

