'''
Problem Statement

Write a Program which accepts date month and year from user and checks for the validity of date according to month.
'''

date,month,year = input("Enter date in dd/mm/yyyy format only \n").split('/')

date = int(date)
month = int(month)
year = int(year)

if (date <= 0 or date > 31):

    print("Invalid Input, Date greater than 31 or less than 0")

elif (month <= 0 or month > 12):

    print("Invalid Input, Month greater than 12 or less than 0")

elif (year <= 0 or year > 9999):

    print("Invalid Input, Year greater than 9999 or less than 0")

else :

    if month == 2 :

        if date <= 28 :

            print("The date ",date,"/",month,"/",year," is Valid")

        elif date <= 29 and (year % 4 == 0 and year %100 != 0 or year % 400 == 0):

            print("The date ",date,"/",month,"/",year," is Valid")

        else:

            print("The date ",date,"/",month,"/",year," is InValid")

    elif date <= 30 and (month == 4 or month == 6 or month == 9 or month == 11):

        print("The date ",date,"/",month,"/",year," is Valid")

    elif date <= 31 and (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12):

        print("The date ",date,"/",month,"/",year," is Valid")

    else :

        print("The date ",date,"/",month,"/",year," is InValid")

