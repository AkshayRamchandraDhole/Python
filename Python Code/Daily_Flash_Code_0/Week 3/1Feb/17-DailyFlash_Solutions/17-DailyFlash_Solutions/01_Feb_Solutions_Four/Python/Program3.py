'''
Write a Program to Convert the Hours entered by user into
Seconds.
'''

hrs=float(input("Enter the time in hours(hrs):"))

if(hrs >= 0):

    sec= 60 * 60 * hrs

    print(sec,"seconds")

else:

    print("Invalid input !")
    print("Hours cann't be negative")
