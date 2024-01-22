a = 0
b = 1
c = 0
for i in range(0, 4):
    for j in range(0, 7):   
        if(j < 4):
            if(j < 3 - i):
                print("", end = "\t")
            else:
                if(i == 0):
                    print(a, end = "\t")
                elif(i == 1 and j == 2):
                    print(b, end = "\t")
                else:
                    c = a + b
                    print(c, end = "\t")
                    a = b
                    b = c
        else:
            if(j < 4 + i):
                c = a + b
                print(c, end = "\t")
                a = b
                b = c
    print()
			
		

