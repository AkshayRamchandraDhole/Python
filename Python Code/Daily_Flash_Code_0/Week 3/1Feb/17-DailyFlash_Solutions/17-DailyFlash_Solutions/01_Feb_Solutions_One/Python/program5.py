



num1=int(input("Enter The First Number :: "))

num2=int(input("Enter The Second Number :: "))


reminder=0

if num1>num2:
    reminder=num1%num2
else:
    reminder=num2%num1


temp=reminder

while reminder!=0:
    temp=reminder
    if num1>num2:
        reminder=num2%reminder
    else:
        reminder=num1%reminder
    
    if num1>num2:
        num2=temp
    else:
        num1=temp


if reminder==0:
    if num1>num2:
        print("GCD = ",num2)
    else:
        print("GCD = ",num1)
else:
    print("GCD = ",temp)

