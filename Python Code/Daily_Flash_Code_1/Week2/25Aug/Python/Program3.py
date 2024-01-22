n1=int(input("How many friend you are:"))
for i in range(n1):
    nm=input("Enter Name:")
    rnm=nm[::-1]
    if(nm==rnm):
        print("Your This Friend get Discount:",nm)
    else:
        print("Your This Friend not get Discount:"+nm)

