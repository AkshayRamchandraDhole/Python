import math as m
n1=int(input("Enter Value N:"))
num=n1
su=0
list1=list()
while n1 > 0:
    n2=int(input("Enter Values:"))
    list1.append(n2)
    su+=n2
    n1-=1
avg=su/num
print("Average of Number:",round(avg,2))
var=0
for i in list1:
    va=(avg-i)**2
    var+=va
varr=var/num
print("Variance of Numbers:",round(varr,2))
sd=m.sqrt(varr)
print("Standard Deviation of Numbers:",round(sd,2))

