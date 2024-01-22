import math as m
def main():
    lan=0
    menu()
    lan=eval(input("Enter 1-3 from menu:"))
    if lan==1:
        print("Average of Number:",round(avg,2))
    elif lan==2:
        print("Variance of Numbers:",round(varr,2))
    elif lan==3:
        print("Standard Deviation of Numbers:",round(sd,2))
    else:
        print("INVALID!!!!Input")
        
    while lan==4:
        break
    else:
        remenu()
def remenu():
    st=""
    st=input("yes or no:")
    while st.lower()=="no":
        break
    else:
        main()

def menu():
    print("Choose Operation:")
    print("1.Calculate Average:")
    print("2.Calculate Variance:")
    print("3.Calculate Standard Deviation")        
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
#print("Average of Number:",round(avg,2))
var=0
for i in list1:
    va=(avg-i)**2
    var+=va
varr=var/num
#print("Variance of Numbers:",round(varr,2))
sd=m.sqrt(varr)
#print("Standard Deviation of Numbers:",round(sd,2))
main()
