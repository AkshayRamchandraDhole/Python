from array import array
import math as m
le=int(input("Enter Length of array:"))
l=[]
for i in range(le):
    n1=int(input("Enter Element:"))
    l.append(n1)
arr=array('i',l)
su=0
sd=0
var=0
for i in arr:
    su+=i
var=0
avg=su/le
print("Avg is:",avg)
for i in arr:
    va=(avg-i)**2
    var+=va
varr=var/le
print("Variance:",round(varr,2))
sd=varr**0.5
print("Standard Deviation:",round(sd,2))


