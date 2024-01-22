def fact(n):
    fa=1
    for i in range(1,n+1):
        fa*=i
    return fa
le=int(input("Enter Length of Series:"))
x,y=input("Enter Value of x and y:").split()
x=int(x)
y=int(y)
add=0
for i in range(1,le+1):
    a=fact(i)
    print(x,y)
    add+=i*(x+y)/a
print("The Addition of entered Series:",add)


