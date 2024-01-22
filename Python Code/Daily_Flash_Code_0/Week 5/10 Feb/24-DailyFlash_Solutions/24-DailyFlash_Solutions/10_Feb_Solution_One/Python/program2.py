num = input("Enter the octal number")

rem = 0
print(num)

binary = ""
while num!=0:

    rem = int(num % 10)

    if rem == 0:
        binary = "".join(["000",binary])
    elif rem == 1:
        binary = "".join(["001",binary])
    elif rem == 2:
        binary = "".join(["010",binary])
    elif rem == 3:
        binary = "".join(["011",binary])
    elif rem== 4:
        binary = "".join(["100",binary])
    elif rem == 5:
        binary = "".join(["101",binary])
    elif rem == 6:
        binary = "".join(["110",binary])
    elif rem == 7:
        binary = "".join(["111",binary])
    else:
        print("Invalid digit")

    num = int(num/10);    


print(binary)    
