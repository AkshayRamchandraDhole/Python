import math as m


n=int(input("Enter N:"))
r=int(input("Enter R:"))

nCr=m.factorial(n)/(m.factorial(r)*m.factorial(n-r))
print("The number of combination:",int(nCr))
nPr=m.factorial(n)/(m.factorial(n-r))
print("The number of permutations:",int(nPr))

