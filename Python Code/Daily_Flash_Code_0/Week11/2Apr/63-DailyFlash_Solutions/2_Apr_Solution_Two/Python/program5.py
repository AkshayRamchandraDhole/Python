
import math
len = float(input("Enter length in metre  : "))
per = float(input("Enter period in seconds  : "))

g = (4*3.142*3.142*len)/(per*per)
print("Acceleration : ", g, "m/sec sq")
#per = round((2*3.142)/(math.sqrt(len/9.81)), 3)
#fre = 1/per
#print("period in seconds : ", per)
#print("Frequency in Hz : ", fre)
