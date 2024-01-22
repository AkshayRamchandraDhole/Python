'''
Problem Statement

Write a Program that calculates Kinetic Energy of object with given Mass & Velocity.
{Note: K.E. = 1⁄2 * m * v * v }
'''

mass = int(input("Enter Mass in KG \n"))
vel  = int(input("Enter Velocity in m/s\n"))

ke = (vel*vel*mass)//2
print("Kinetic Energy of object is = ",ke)
