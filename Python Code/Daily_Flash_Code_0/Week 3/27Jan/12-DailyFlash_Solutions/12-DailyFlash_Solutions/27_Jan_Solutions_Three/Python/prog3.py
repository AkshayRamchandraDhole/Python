dist, time = [float(i) for i in input("Enter dist and time : ").split()]
print("Vel : ", dist / time, " m/s") if dist >= 0 and time >= 0 else print("Enter valid details")
