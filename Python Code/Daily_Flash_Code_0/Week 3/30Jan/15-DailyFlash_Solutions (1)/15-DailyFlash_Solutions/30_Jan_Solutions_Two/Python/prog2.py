m = float(input("mass : "))
v = float(input("vel : "))
print("KE : ", m * v * v / 2) if m >= 0 and v >= 0 else print("Invalid det.")
