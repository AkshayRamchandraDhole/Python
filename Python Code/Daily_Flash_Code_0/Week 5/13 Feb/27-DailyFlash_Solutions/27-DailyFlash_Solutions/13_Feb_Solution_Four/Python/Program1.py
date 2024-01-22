'''
Write a Program to check whether the entered number is Strong
Number or Not.
{Note: A number can be termed as strong number; if the sum of factorials of
each digit from that number is equal to that number, itself. e.g. 145 is a Strong
Number since 1 + 24 + 120 = 145.}
'''

sum1=0
num=int(input("Enter a number:"))
temp=num
while(num):
    x=1
    y=1
    r=num%10
    while(x<=r):
        y=y*x
        x=x+1
    sum1=sum1+y
    num=num//10
if(sum1==temp):
    print("The number is a strong number")
else:
    print("The number is not a strong number")
