n=int(input("Enter Length of Series:"))
pie=3.14
add=0
for i in range(1,n+1):
    add+=pie/i*2
print("The addition of Series of length",n,"=",round(add,2))
