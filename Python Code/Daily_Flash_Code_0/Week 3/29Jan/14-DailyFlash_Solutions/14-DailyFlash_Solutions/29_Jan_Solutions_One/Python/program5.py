
date = input("Enter the date : ")
month = input("Enter the month : ")
year = input("Enter he year : ")

if month == 1 or month == 3 or month ==5 or month==7 or month==8 or month==10 or month==10 or month==12:
    if date >31:
        print("Invalid")
    else:
        print("Valid")
elif month == 4 or month ==6 or month==9 or month==11:
    if date >30:
        print("Invalid")
    else:
        print("Valid")
elif month ==2:
    if date >28:
        print("Invalid")
    else:
        print("Valid")
