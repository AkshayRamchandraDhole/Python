iStart=int(input("Enter Starting Number:"))
iEnd=int(input("Enter Ending Value:"))
f1=iStart
f2=1
su=0
print(f1,f2,end=" ")
for i in range(iStart,iEnd+1):
    su=f1+f2
    print(su,end=" ")
    f1=f2
    f2=su
print()


