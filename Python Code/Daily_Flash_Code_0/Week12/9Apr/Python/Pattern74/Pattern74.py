for i in range(7):
    for j in range(4):
        if(i<7-j and j<=i):
            if(i<4):
                 print(chr(i+65),end='\t')
            else:
                print(chr(71-i),end='\t')
        else:
            print(" ",end='\t')
    print()

