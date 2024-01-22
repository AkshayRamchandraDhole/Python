a=0
for i in range(7):
    if(i < 4):
        for j in range(4 +i):
            if(j < 3-i):
                print(" ", end = "")
            else:
                if(i%2 == 0):
                    if(j%2 == 1):
                        print(chr(a+65), end = "")
                        a+=1
                        p=a
                        
                    else:
                        print(" ", end = "")
                else:
                    if(j%2 == 0):
                        print(chr(p-1+65), end = "")
                        p+=1
                    else:
                        print(" ", end = "")
    else:
        for j in range(10-i):
            if(j < i-3):
                print(" ", end = "")
            else:
                if(i%2 == 0):
                    if(j%2 == 1):
                        print(chr(p-2+65), end = "")
                        p+=1
                        a=p
                    else:
                        print(" ", end = "")
                else:
                    if(j%2 == 0):
                        print(chr(a-3+65), end = "")
                        a+=1
                        

                    else:
                        print(" ", end = "")
    print()

