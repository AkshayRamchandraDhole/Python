le=float(input("Length of Pendulum in meters:"))
pe=float(input("Period of Pendulum in Seconds:"))
pie=3.14
g=(le*pe)/(4*pie**4)
print("Acceleration of that pendulum is:",round(g,2),"m/s^2")
