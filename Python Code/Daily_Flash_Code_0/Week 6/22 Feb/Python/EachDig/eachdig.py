def binec(n):
    while n > 0:
        rem=n%10
        print("Binary of Each Digit:",bin(rem))
        n=n//10

def hexdig(n):
    while n > 0:
        rem=n%10
        print("Hexadecimal of Each Digit:",hex(rem))
        n=n//10

def octdig(n):
    while n > 0:
        rem=n%10
        print("Octal of Each Digit:",oct(rem))
        n=n//10
    
n=int(input("Enter Number:"))
a=int(input("Enter Your Choice:"))
if a == 1:
    binec(n)
elif(a==2):
    hexdig(n)
elif(a==3):
    octdig(n)
else:
    print("Exit")
