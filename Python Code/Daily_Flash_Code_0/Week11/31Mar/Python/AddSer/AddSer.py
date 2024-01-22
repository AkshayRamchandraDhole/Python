def fact(n):
    fa=1
    for i in range(1,n+1):
        fa*=i
    return fa
le=int(input("Enter Length of Series:"))
add=0
for i in range(1,le+1):
    a=fact(i)
    add+=i/a
print("The Addition of entered Series:",round(add,2))

