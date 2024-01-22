n=int(input("Enter Length of Series:"))
mul=1
a=0
for i in range(1,n+1):
    mul=mul*(i+a)
    a+=i
print("Multiplication of Series is:",mul)
