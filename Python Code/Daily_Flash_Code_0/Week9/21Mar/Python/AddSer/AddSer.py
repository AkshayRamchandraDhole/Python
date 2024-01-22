n1=int(input("Enter Length of Series:"))
add=0
n=0
for i in range(1,n1+1):
    add+=i**i*n
    n+=1
print("The Additon of Series of length",n,'=',add)
