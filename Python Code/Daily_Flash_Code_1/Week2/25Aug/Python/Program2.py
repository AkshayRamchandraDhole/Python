def lcm():
    l1=list()
    n1=int(input("Enter Number:"))
    for i in range(n1):
        i=int(input("List Element:"))
        l1.append(i)
    l=len(l1)
    for i in range(0,(len(l1))):
        num1=l1[i]
        num2=l1[l-1]
        print(num1,num2)
        lcm=0
        max=0
        if(num1 > num2):
            max=num1
        else:
            max=num2
        while(num1!=0):
            if(max % num1 == 0 and max % num2 == 0):
                lcm=max
                break
            max+=1
        print("LCM:",lcm)
lcm()


