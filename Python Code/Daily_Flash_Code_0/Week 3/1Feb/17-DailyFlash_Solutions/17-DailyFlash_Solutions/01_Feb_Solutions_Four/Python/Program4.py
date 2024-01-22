'''
Write a Program to Print following Pattern.
+ = + =
+ = +
+ =
+
'''

row=int(input("Enter number of rows :"))

for x in range(row,0,-1):

    for y in range(1,x+1):

        if(y % 2 == 0):

            print("=",end=" ")
        
        else:

    
            print("+",end=" ")


    print()
