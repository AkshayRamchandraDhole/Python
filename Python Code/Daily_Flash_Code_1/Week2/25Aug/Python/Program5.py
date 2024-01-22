import time
revl1=input("Enter Revolution1:")
yr1=int(input("Enter Year1:"))
revl2=input("Enter Revolution2:")
yr2=int(input("Enter Year2:"))
if(yr1 > yr2):
    t1=time.clock()
    print("Diiference of Year is:",yr1-yr2)
    t2=time.clock() - t1
    print("Time Elapsed:",t1)
else:
    t1=time.clock()
    print("Diiference of Year is:",yr2-yr1)
    t2=time.clock() - t1
    print("Time Elapsed:",t1)

