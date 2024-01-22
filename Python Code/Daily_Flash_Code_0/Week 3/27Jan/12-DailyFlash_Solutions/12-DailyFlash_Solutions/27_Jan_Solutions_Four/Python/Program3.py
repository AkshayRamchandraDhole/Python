'''
Problem Statement

Write a Program to calculate Velocity of particle in the space having Distance & Time Entered By User
'''

dist = int(input("Enter distance in metres \n"))
time = int(input("Enter time in seconds \n"))

vel = dist//time

print("The Velocity of a Particle roaming In space is ",vel," m/s")
