start = int(input())
end = int(input())
sumOdd=0
sumEven=0
evenList=list()
oddList=list()
if(end <= start):
    print("INVALID INPUT")
else:
    for i in range(start,end+1):
        if(i%2==0):
            evenList.append(i)
            sumEven+=i
        else:
            oddList.append(i)
            sumOdd+=i
eCount=0
oCount=0
if(sumEven > sumOdd):
    for i in evenList:
        print(i,end=" ")
        eCount=eCount+1
        if(eCount % 5 == 0):
            print()
else:
    for i in oddList:
        print(i,end=" ")
        oCount=oCount+1
        if(oCount % 5 == 0):
            print()

