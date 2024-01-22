import math as m
N=int(input("Enter the length of set:"))
R=int(input("Enter the number of items allowed to pick at a time:"))
P=m.factorial(N)/m.factorial(N-R)
print("To pick",R,"items from a set of",N,"itemss there are",int(P),"possible ways")
