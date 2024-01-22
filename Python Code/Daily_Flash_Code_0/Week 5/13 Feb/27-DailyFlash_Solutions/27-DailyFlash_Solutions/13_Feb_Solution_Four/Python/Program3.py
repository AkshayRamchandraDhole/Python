'''
Write a Program to that accepts an integer value from user and
prints the sum of all digits from that number.
'''

num = int(input("Please Enter any Number: "))
Sum = 0

while(num > 0):
    Rem= num % 10
    Sum = Sum + Rem
    num = num //10

print("\n Sum of the digits of Given Number = %d" %Sum)
