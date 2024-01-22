d, m, y = [int(i) for i in input("Date : ").split()]
if((m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) and (d > 0 and d <= 31) and y >= 0):
    print("Vaiid date") 
elif((m == 4 or m == 6 or m == 9 or m == 11) and (d > 0 and d <= 30) and y >= 0):
    print("valid date")
elif(m == 2 and y >= 0): 
    if(y % 100 == 0): 
        if(y % 400 == 0):  
            if(d > 0 and d <= 29):  
                print("valid date")
            else:
                print("Invalid date")
        else:
            if(d > 0 and d <= 28):
                print("Valid")
            else:
                print("Invalid date")
    elif(y % 4 == 0):
        if(d > 0 and d <= 29):
            print("valid date") 
        else:
            print("Invalid date")
    elif(d > 0 and d <= 28): 
        print("valid date") 
    else:
        print("Invalid date")
else:  
    print("Invalid") 
 

