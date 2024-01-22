ch='A'
for i in range(7):
    if(i>0):
        ch1 = ord(ch)-1
        ch = chr(ch1)
    if(i < 4):
        for j in range(4 +i):
            if(j < 3-i):
                print(" ", end = "")
            else:
                if(i%2 == 0):
                    if(j%2 == 1):
                        print(ch, end = "")
                        l = ord(ch) + 1
                        ch = chr(l)
                    else:
                        print(" ", end = "")
                else:
                    if(j%2 == 0):
                        print(ch, end = "")
                        l = ord(ch) + 1;
                        ch = chr(l)
                    else:
                        print(" ", end = "")
    else:
        for j in range(10-i):
            if(j < i-3):
                print(" ", end = "")
            else:
                if(i%2 == 0):
                    if(j%2 == 1):
                        print(ch, end = "")
                        l = ord(ch) + 1;
                        ch = chr(l)
                    else:
                        print(" ", end = "")
                else:
                    if(j%2 == 0):
                        print(ch, end = "")
                        l = ord(ch) + 1;
                        ch = chr(l)
                    else:
                        print(" ", end = "")
    print()

