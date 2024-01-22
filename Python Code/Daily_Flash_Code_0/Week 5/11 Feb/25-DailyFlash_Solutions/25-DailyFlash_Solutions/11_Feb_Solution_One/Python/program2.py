

num = input("Enter the number ")

rem =0 
rev= 0
base = 1

while num!=0:

    rem = num%10

    rev = rev + rem*base

    base = base*8

    num = num/10


print(rev)
