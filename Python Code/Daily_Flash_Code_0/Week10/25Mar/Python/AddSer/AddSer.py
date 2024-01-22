le,x,y=input("Enter Length and value of X and Y: ").split()
le=int(le)
x=int(x)
y=int(y)
add=0
for i in range(1,le+1):
    add+=i/(x+y)**i
print("The Addition of Series of length",le,"=",round(add,2))


