def fact(n):
    fa=1
    for i in range(1,n+1):
        fa*=i
    return fa
le=int(input("Enter Length of Series:"))
add=0
for i in range(1,le+1):
    x=fact(i)
    add+=1/x
print("Addition of Series is:",round(add,2))


