n=int(input("Enter Length of Series:"))
mul=1
for i in range(1,n+1):
    mul*=i*i
print("Multipplication of Series of Length",n,"=",mul)
