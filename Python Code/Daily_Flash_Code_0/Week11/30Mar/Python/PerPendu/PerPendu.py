le=float(input("Length of Pendulum in Meters:"))
pie=3.14
g=9.81
a=(le/g)**0.5
T=2*pie*a
print("Period of that Pendulum is:",round(T,2),"seconds")
