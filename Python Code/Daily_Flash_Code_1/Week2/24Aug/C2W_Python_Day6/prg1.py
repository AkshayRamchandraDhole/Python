year = int(input("Enter year\n"))
print("Leap Year") if year % 400 == 0 or year % 100 != 0 and year % 4 == 0 else print("Not Leap Year")
