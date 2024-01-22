def bitCompl(num):
    binary=bin(num).replace("0b","")
    binary=int(binary)
    print("Binary of Number is:",binary)
    rem=0
    l=list()
    while(binary!=0):
        rem=binary%10
        if(rem==1):
            l.append(0)
        elif(rem==0):
            l.append(1)
        binary//=10
    print("Bitwise Complement of Binary Number is:")
    for i in reversed(l):
        print(i,end="")
    print()
num=int(input("Enter Number:"))
bitCompl(num)
