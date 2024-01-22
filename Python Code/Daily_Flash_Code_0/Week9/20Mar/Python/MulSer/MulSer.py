n=int(input("Enter Length Of Series:"))
mul=1
for i in range(1,n+1):
    mul*=i**i
print("The Multiplication of Series of length",n,"=",mul)
