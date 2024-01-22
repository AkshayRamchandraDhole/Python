'''
Write a Program to Print following Pattern.
         A3
      B3 A4
   C3 B4 A5
D3 C4 B5 A6
'''

rows = int(input("Enter The number of rows\n"))

for x in range(rows) :

    for y in range(rows):

        if( x+y >= (rows-1)) :

            print(chr(64+rows-y),(x+y),"\t",end="",sep='')
        else :
            print(" \t",end="",sep='')
    print()
