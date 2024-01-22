def fact(n):
    fa=1
    for i in range(1,n+1):
        fa*=i
    return fa
le=int(input("Enter length of series:"))
x,y=input("Enter X and Y:").split()
x=int(x)
y=int(y)
add=0
for i in range(1,le+1):
    a=fact(i)
    add+=(x+y)**i/a
print("The Addition of Series:",add)
