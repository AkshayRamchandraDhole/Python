le=int(input("Enter Length of Series:"))
x,y=input("Enter Value of X and Y:").split()
x=int(x)
y=int(y)
add=0
for i in range(1,le+1):
    add+=(x+y)**i
print("Addition of Series is:",add)
