iYear=int(input("Enter Year:"))
if(iYear%4==0 and iYear%100!=0 or iYear%400==0):
    print("Leap Year:"+str(iYear))
else:
    print("Not Leap Year:"+str(iYear))
